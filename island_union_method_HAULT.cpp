#include <bits/stdc++.h>
using namespace std;

int find_union(int node, int arr[])
{
    if(arr[node]==-1) return node;
    else
    {
        return find_union(arr[node], arr);
    }
}

void make_union(int node, int arr[])
{
}

int num_islands(vector<vector<char>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int count = 0;
    int arr[n*m] = {-1};
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(grid[i][j]=='1')
            {
                int node = i*n + j;
                int root = find_union(node, arr);

            }
        }
    }
}

int main(){

    

    return 0;
}// end of main