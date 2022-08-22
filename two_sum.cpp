/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
    int n=nums.size();
    vector<int> result(2,-1);
    vector<pair<int, int>> hash_table;
    for(int i=0; i<n-1; i++)
    {
        int x = target-nums[i];
        for(int j=i+1; j<n; j++)
        {
            if(nums[j]==x) 
            {
                result[0]=i;
                result[1]=j;
                return result;
            }
            else
            {
                for(auto pr : hash_table)
                {
                    if(pr.second==x) 
                    {
                        result[0]=pr.first;
                        result[1]=i;
                        return result;
                    }
                }
                hash_table.push_back(make_pair(j, nums[j]));
            }
        }
    }
    return result;
}
// time: O(n) ; worst:O(n^2)
// space: O(n)

int main(){

    vector<int> nums = {2,7,11,15};
    int target = 13;
    for(auto x : twoSum(nums, target)) cout << x << "   ";
    cout << endl;

    return 0;
}// end of main