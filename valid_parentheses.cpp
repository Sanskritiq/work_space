/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
*/

#include <bits/stdc++.h>
using namespace std;

// bool is_valid(string s)   // ggod thinking, but it is wrong
// {
//     int len = s.length();
//     int type1=0, type2=0, type3=0;
//     for(int i=0; i<len; i++)
//     {
//         if(type1<0 || type2<0 || type3<0) return false;
//         if(s[i]=='(') type1++;
//         else if(s[i]==')') type1--;
//         else if(s[i]=='{') type2++;
//         else if(s[i]=='}') type2--;
//         else if(s[i]=='[') type3++;
//         else type3--;
//     }
//     if(type1==0 && type2==0 && type3==0) return true;
//     return false;
// }
// // time: O(n)
// // space: O(1)

// bool is_valid(string s)   // okkey-ish approach, but wrong again
// {
//     int len = s.length();
//     if(len%2!=0) return false;
//     string sopen="", sclose="";
//     for(int i=0; i<len; i++)
//     {
//         if(s[i]=='(' || s[i]=='{' || s[i]=='[') sopen += s[i];
//         else sclose += s[i];
//     }
//     int lopen=sopen.length();
//     int lclose=sclose.length();
//     if(lopen!=lclose) return false;
//     for(int i=0; i<lopen; i++)
//     {
//         if(sopen[i]=='(' && sclose[lclose-i-1]!=')') return false;
//         if(sopen[i]=='{' && sclose[lclose-i-1]!='}') return false;
//         if(sopen[i]=='[' && sclose[lclose-i-1]!=']') return false;
//     }
//     return true;
// }

bool is_valid(string s)      // using stacks
{
    int len = s.length();
    stack<char> open;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            open.push(s[i]);
        }
        else
        {            
            if((s[i]==')' && open.top()=='(') || (s[i]=='}' && open.top()=='{') || (s[i]==']' && open.top()=='[')) open.pop();
            else return false;
        }
    }
    if(!open.empty()) return false;
    return true;
}
// time: O(n)
// space: O(n)

int main(){

    string s = "{[({})]}[]()";
    cout << is_valid(s) << endl;

    return 0;
}// end of main