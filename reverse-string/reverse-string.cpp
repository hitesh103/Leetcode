class Solution {
public:

    void revers(int start , int end , vector<char>& s){
        if(start >= end) return;
        swap(s[start],s[end]);
        revers(start+1,end-1,s);
    }

    void reverseString(vector<char>& s) {
        int end = s.size()-1;
        int start = 0;
        revers(start,end,s);
    }
};