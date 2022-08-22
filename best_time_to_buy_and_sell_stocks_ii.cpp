/*
You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

Find and return the maximum profit you can achieve.
*/


#include <bits/stdc++.h>
using namespace std;

int max_profit(vector<int> &arr)
{
    int n=arr.size();
    int max_profit=0;
    int min=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if((arr[i]-min)>0)
        {
            max_profit+=arr[i]-min;
            min=arr[i];
        }
    }
    return max_profit;
}

int main(){

    vector<int> arr = {7,6,4,3,1};
    cout << max_profit(arr) << endl;

    return 0;
}// end of main