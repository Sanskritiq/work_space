/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
*/

#include <bits/stdc++.h>
using namespace std;

string longest_common_prefix(vector<string> & str)
{
    string result = "";
    int n=str.size();
    int i=0;
    int min = str[0].length();
    for(auto s : str)
    {
        if(s.length()<min) min=s.length();
    }
    while(i<min)
    {
        for(int j=0; j<n-1; j++)
        {
            if(str[j][i]!=str[j+1][i])
            {
                return result;
            }
        }
        result += str[0][i];
        i++;
    }
    return result;
}
// time: O(n*m) --> m is length of minimum length string in vector
// space: O(m)

int main(){

    vector<string> str = {"dog","racecar","car"};
    cout << longest_common_prefix(str) << endl;

    return 0;
}// end of main