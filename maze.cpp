#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   bool hasPath(vector<vector<int<>& grid, vector<int<& start, vector<int<& destination) {
      int n = grid.size();
      int m = grid[0].size();
      queue<vector<int< > q;
      q.push(start);
      set<vector<int< > visited;
      visited.insert(start);
      while (!q.empty()) {
         vector<int< curr = q.front();
         q.pop();
         int x = curr[0];
         int y = curr[1];
         if (destination[0] == x && destination[1] == y)
            return true;
         int i = x;
         while (i + 1 < n && !grid[i + 1][y])
            i++;
         if (!visited.count({ i, y })) {
            visited.insert({ i, y });
            q.push({ i, y });
         }
         i = x;
         while (i - 1 >= 0 && !grid[i - 1][y])
            i--;
         if (!visited.count({ i, y })) {
            visited.insert({ i, y });
            q.push({ i, y });
         }
         i = y;
         while (i + 1 < m && !grid[x][i + 1])
            i++;
         if (!visited.count({ x, i })) {
            visited.insert({ x, i });
            q.push({ x, i });
         }
         i = y;
         while (i - 1 >= 0 && !grid[x][i - 1])
            i--;
         if (!visited.count({ x, i })) {
            visited.insert({ x, i });
            q.push({ x, i });
         }
      }
      return false;
   }
};
main(){
   Solution ob;
   vector<vector<int<> v = {{0,0,1,0,0},{0,0,0,0,0},{0,0,0,1,0},{1,1,0,1,1},{0,0,0,0,0}};
   vector<int< v1 = {0,4}, v2 = {4,4};
   cout << (ob.hasPath(v, v1, v2));
}
