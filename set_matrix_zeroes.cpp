/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.
*/

#include <bits/stdc++.h>
using namespace std;

// void set_zeroes(vector<vector<int>> &matrix)   // brute approach
// {
//     vector<int> row;
//     vector<int> col;

//     int n = matrix.size();
//     int m = matrix[0].size();
    
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             if(matrix[i][j]==0)
//             {
//                 row.push_back(i);
//                 col.push_back(j);
//             }
//         }
//     }

//     for(int i=0; i<row.size(); i++)
//     {
//         matrix[row[i]].clear();
//         matrix[row[i]].resize(m, 0);
//     }

//     for(int j=0; j<col.size(); j++)
//     {
//         for(int i=0; i<n; i++)
//         {
//             matrix[i][col[j]] = 0;
//         }
//     }
// }
// // time: O(3*n*m)
// // space: O(n*m)

// void set_zeroes(vector<vector<int>> &matrix)    // approach 2
// {
//     int n = matrix.size();
//     int m = matrix[0].size();

//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             if(matrix[i][j]==0)
//             {
//                 for(int x=0; x<n; x++)
//                 {
//                     if(matrix[x][j]!=0) matrix[x][j]=-1;
//                 }
//                 for(int y=0; y<m; y++)
//                 {
//                     if(matrix[i][y]!=0) matrix[i][y]=-1;
//                 }
//             }
//         }
//     }
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             if(matrix[i][j]==-1)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
// }
// // time: O(2*n*m)
// // space: O(1)

void set_zeroes(vector<vector<int>> &matrix)    // approach 2
{
    int n = matrix.size();
    int m = matrix[0].size();

    int col0 = 1;

    for(int i=0; i<n; i++)
    {
        if(matrix[i][0]==0) col0=0;
        for(int j=1; j<m; j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }

    for(int i=n-1; i>=0; i--)
    {
        for(int j=m-1; j>=1; j--)
        {
            if(matrix[i][0]==0 || matrix[0][j]==0)
            {
                matrix[i][j]=0;
            }
        }
        if(col0==0) matrix[i][0]=0;
    }
}
// time: O(2*n*m)
// space: O(1)



int main(){

    vector<vector<int>> matrix = {{0,0,0,0},
                                  {0,4,5,0},
                                  {0,3,1,0}};

    for(auto x : matrix)
    {
        for(auto y : x) cout << y << "  ";
        cout << endl;
    }

    return 0;
}// end of main