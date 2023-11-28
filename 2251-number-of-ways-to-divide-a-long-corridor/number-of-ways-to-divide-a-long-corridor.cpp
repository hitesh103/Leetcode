class Solution {
public:
    int numberOfWays(string corridor) {
        int n = corridor.length();
        vector<int> lastPArray;
        int lastPCount = 0;
        int sCount = 0;
        long long int numOfWays = 1;

        for(int i=0;i<n;i++){
            if(corridor[i] == 'S'){
                sCount++;
            }
        }

        if(sCount % 2 != 0 || sCount == 0){
            return 0;
        }

        sCount = 0;

        for(int i=0;i<n;i++){

            if(corridor[i] == 'S'){
                sCount++;
            }
            if(sCount == 0){
                if(corridor[i] == 'P'){
                    lastPCount++;
                }
            }
            if(sCount == 2){
                lastPArray.push_back(lastPCount+1);
                lastPCount = 0;
                sCount = 0;
            }
        }

        // for(auto x : lastPArray){
        //     cout << x << " " ;
        // }

        for(int i = 1; i < lastPArray.size(); i++ ){
            numOfWays = ( numOfWays * lastPArray[i] ) % ( (1000000000) + 7 );
        }

        return numOfWays;
    }
};


// ppp s pp s | pppp s pp s |p |p | s p s ppp |

