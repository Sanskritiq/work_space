/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
*/


#include <bits/stdc++.h>
using namespace std;

// int remove_duplicates(vector<int> &arr)   // using erase function of vector
// {
//     auto itr = arr.begin();
//     while(itr!=(arr.end()-1))
//     {
//         if(*itr==*(itr+1)) arr.erase(itr);
//         else itr++;
//     }
//     return arr.size();
// }
// // time: O(n^2)
// // space: O(1)

int remove_duplicates(vector<int> &arr)
{
    int n = arr.size();
    int i=0, j=0;
    while(i<=j && j<n)
    {
        if(arr[i]==arr[j]) j++;
        else 
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return (i+1);
}
// time: O(n)
// space: O(1)

int main(){

    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};

    int k = remove_duplicates(arr);
    cout << k << endl;
    for(int i=0; i<k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}// end of main