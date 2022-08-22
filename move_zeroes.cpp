/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
*/

#include <bits/stdc++.h>
using namespace std;

// void move_zeroes(vector<int> &arr)  // my approach
// {
//     int n=arr.size();
//     int i=0, j=0;
//     while(i<n && j<n)
//     {
//         if(arr[i]==0 && arr[j]!=0)
//         {
//             swap(arr[i], arr[j]);
//             j++;i++;
//         }
//         else if(arr[i]==0)
//         {
//             j++;
//         }
//         else
//         {
//             i++;j++;
//         }
//     }
// }
// // time: O(n)
// // space: O(1)

void move_zeroes(vector<int> &arr)
{
    int n=arr.size();
    int current=0, first_zero=0;
    while(current<n)
    {
        if(arr[current]!=0)
        {
            swap(arr[current], arr[first_zero++]);
        }
        current++;
    }
}
// time: O(n)
// space: O(1)

int main(){

    vector<int> arr={0,1,0,3,12};
    move_zeroes(arr);
    for(auto i : arr) cout << i << "    ";
    cout << endl;

    return 0;
}// end of main