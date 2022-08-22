
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void bfs(vector<vector<char>>& grid,vector<vector<int>>& vis,int i,int j){
        if(i<grid.size()&&j<grid[0].size()&&i>=0&&j>=0&&grid[i][j]=='1')
        {   if(!vis[i][j]){
                vis[i][j]=1;
                bfs(grid,vis,i-1,j);
                bfs(grid,vis,i,j-1);
                bfs(grid,vis,i+1,j);
                bfs(grid,vis,i,j+1);
            }
        }
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int icount=0;
        vector<vector<int>> vis(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
             if(!vis[i][j]){
                 vis[i][j]=0;
                 if(grid[i][j]=='1'){
                     icount++;
                     bfs(grid,vis,i,j);    
                     } 
                 }
             }
         }
        return icount;
        }
        
};

int main(){

    vector<vector<char>> grid = { { '1', '1', '1', '1', '0'},
                                  { '1', '1', '0', '1', '0'},
                                  { '1', '1', '0', '0', '0'},
                                  { '0', '0', '0', '0', '0'}};

    Solution sol;
    cout << sol.numIslands(grid) << endl;

    return 0;
}// end of main