/*
Write an efficient program to print all the duplicates and their counts in the input string 
*/

#include <bits/stdc++.h>
using namespace std;

// void print_duplicates(string s)
// {
//     int l = s.length();
//     map<char, int> count;
//     for(int i=0; i<l; i++)
//     {
//         count[s[i]]++;
//     }
//     for(auto i : count)
//     {
//         cout << i.first << "    " << i.second << endl;
//     }
// }
// // time: O(nlogn) --> O(logn) time to search through map
// // space: O(n)

void print_duplicates(string s)
{
    int l = s.length();
    unordered_map<char, int> count;
    for(int i=0; i<l; i++)
    {
        count[s[i]]++;
    }
    for(auto i : count)
    {
        cout << i.first << "    " << i.second << endl;
    }
}
// time: O(n) --> O(1) time to search through unordered map
// space: O(n)

int main(){

    string s="mississippie";
    print_duplicates(s);

    return 0;
}// end of main