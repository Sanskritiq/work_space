/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

#include <bits/stdc++.h>
using namespace std;

// int max_profit(vector<int> &arr)  // brute approach
// {
//     int n=arr.size();

//     int max = arr[n-1]-arr[0];
//     for(int i=0; i<n-1; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             int profit=arr[j]-arr[i];
//             if(profit>max) max=profit;
//         }
//     }
//     if(max<0) return 0;
//     return max;
// }
// // time: O(n^2)
// // space: O(1)

int max_profit(vector<int> &arr)
{
    int n=arr.size();
    int min_price=INT_MAX;
    int max_profit=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<min_price) min_price=arr[i];
        if(arr[i]-min_price>max_profit) max_profit=arr[i]-min_price;
    }
    return max_profit;
}
// time: O(n)
// space: O(1)

int main(){

    vector<int> arr = {2,1,2,0,1};

    cout << max_profit(arr) << endl;

    return 0;
}// end of main