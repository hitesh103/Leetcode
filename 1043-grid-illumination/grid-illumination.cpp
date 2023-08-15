class Solution {
 public:
  vector<int> gridIllumination(int n, vector<vector<int>>& lamps,
                               vector<vector<int>>& queries) {
    vector<int> ans;  // Vector to store the answers for each query
    unordered_map<int, int> rows;  // Map to store lamp counts in rows
    unordered_map<int, int> cols;  // Map to store lamp counts in columns
    unordered_map<int, int> diag1;  // Map to store lamp counts in diagonal 1
    unordered_map<int, int> diag2;  // Map to store lamp counts in diagonal 2
    unordered_set<pair<int, int>, pairHash> lampsSet;  // Set to store lamp coordinates

    // Process the lamps and update the counts in the maps
    for (vector<int>& lamp : lamps) {
      int i = lamp[0];
      int j = lamp[1];
      if (lampsSet.insert({i, j}).second) {
        ++rows[i];
        ++cols[j];
        ++diag1[i + j];
        ++diag2[i - j];
      }
    }

    // Process the queries and determine if they can be illuminated
    for (const vector<int>& query : queries) {
      int i = query[0];
      int j = query[1];
      if (rows[i] || cols[j] || diag1[i + j] || diag2[i - j]) {
        ans.push_back(1);  // Add 1 to the answer vector, indicating illumination
        for (int y = max(0, i - 1); y < min(n, i + 2); ++y)
          for (int x = max(0, j - 1); x < min(n, j + 2); ++x)
            if (lampsSet.erase({y, x})) {  // Remove illuminated lamps
              --rows[y];
              --cols[x];
              --diag1[y + x];
              --diag2[y - x];
            }
      } else {
        ans.push_back(0);  // Add 0 to the answer vector, indicating no illumination
      }
    }

    return ans;  // Return the vector of answers
  }

 private:
  struct pairHash {
    size_t operator()(const pair<int, int>& p) const {
      return p.first ^ p.second;  // Custom hash function for lamp coordinates
    }
  };
};
