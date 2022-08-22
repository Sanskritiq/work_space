/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/

#include <bits/stdc++.h>
using namespace std;

// void sort_colors(vector<int> &arr)  // count method
// {
//     int count0 = 0;
//     int count1 = 0;
//     int count2 = 0;
//     int n = arr.size();

//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==0) count0++;
//         else if(arr[i]==1) count1++;
//         else count2++;
//     }

//     int itr=0;
//     while(count0--)
//     {
//         arr[itr]=0;
//         itr++;
//     }
//     while(count1--)
//     {
//         arr[itr]=1;
//         itr++;
//     }
//     while(count2--)
//     {
//         arr[itr]=2;
//         itr++;
//     }
// }
// time: O(n)
// space: O(1);
// two passes

void sort_colors(vector<int> &arr)
{
    int n = arr.size();
    int first=0, second=0, third=n-1;
    while(second<=third)
    {
        if(arr[second]==0)
        {
            swap(arr[second], arr[first]);
            second++;first++;
        }
        else if(arr[second]==1)
        {
            second++;
        }
        else
        {
            swap(arr[second], arr[third]);
            second++;third--;
        }
    }
}

int main(){

    vector<int> arr = {2,0,2,1,1,0};

    sort_colors(arr);

    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}// end of main