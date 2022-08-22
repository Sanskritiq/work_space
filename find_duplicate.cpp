/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space. 
time complexity = O(n)
*/
#include <bits/stdc++.h>
using namespace std;

// int find_duplicates(vector<int> &arr)      // sorting, brute
// {
//     int len = arr.size();
//     sort(arr.begin(), arr.end());
//     for(int i=0; i<len-1; i++)
//     {
//         if(arr[i]==arr[i+1]) return arr[i];
//     }
//     return -1;
// }
// time: O(nlogn)
// space: O(1)


// int find_duplicates(vector<int> &arr)  // better, using freq table
// {
//     int n = arr.size();
//     vector<int> freq(n, 0);
//     for(int i=0; i<n; i++)
//     {
//         freq[arr[i]-1]++;
//     }
//     for(int i=0; i<n; i++)
//     {
//         if(freq[i]>1) return i+1;
//     }
//     return -1;
// }
// time: O(n)
// space: O(n)

int find_duplicates(vector<int> &arr)  // floyd cycle detection 
{
    int fast = arr[0];
    int slow = arr[0];
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while(fast!=slow);
    fast = arr[0];
    while(fast!=slow)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}
// time: O(n)
// space: O(1)


int main(){

    vector<int> arr = {1,3,4,2,2};

    cout << find_duplicates(arr) << endl;

    return 0;
}// end of main