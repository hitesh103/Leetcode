class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int, int>, int> visited_points;
        int x = 0;
        int y = 0;
        visited_points[{x, y}] = 1;

        for (int i = 0; i < path.length(); i++) {
            if (path[i] == 'N') {
                y += 1;
            } else if (path[i] == 'S') {
                y -= 1;
            } else if (path[i] == 'E') {
                x += 1;
            } else if (path[i] == 'W') {
                x -= 1;
            }

            pair<int, int> myPair = make_pair(x, y);

            if (visited_points[myPair] > 0) {
                return true; 
            } else {
                visited_points[myPair]++;
            }
        }
        return false;
    }
};
