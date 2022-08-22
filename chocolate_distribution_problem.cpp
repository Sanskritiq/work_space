/*
Given an array of n integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 

Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum.
*/

#include <bits/stdc++.h>
using namespace std;

int min_difference(vector<int> &arr, int k)
{
    int n=arr.size();
    sort(arr.begin(), arr.end());
    int i=0, j=k-1;
    int min = arr[j]-arr[i];
    while(j<n)
    {
        if(arr[j]-arr[i]<min) min=arr[j]-arr[i];
        i++;j++;
    }
    return min;
}
// time: O(nlogn + n)
// space: O(1)

int main(){

    vector<int> arr = {7, 3, 2, 4, 9, 12, 56};
    int k=3;
    cout << min_difference(arr, k) << endl;

    return 0;
}// end of main