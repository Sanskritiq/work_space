/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
*/


#include <bits/stdc++.h>
using namespace std;

struct trienode
{
    bool is_leaf;
    trienode* current_letter_pointer[26];
    trienode()
    {
        is_leaf=1;
        for(int i=0; i<26; i++)
        {
            current_letter_pointer[i]=NULL;
        }
    }
};

void insert_into_trie(string s, trienode* root)
{
    trienode* temp = root;
    for(int i=0; i<s.length(); i++)
    {
        if(temp->current_letter_pointer[s[i]-'a']==NULL)
        {
            temp->is_leaf=0;
            trienode* newnode = new trienode();
            temp->current_letter_pointer[s[i]-'a'] = newnode;
        }
        temp = temp->current_letter_pointer[s[i]-'a'];
    }
}

int no_of_children(trienode* node, int* index)
{
    trienode* temp = node;
    int count=0;
    for(int i=0; i<26; i++)
    {
        if(temp->current_letter_pointer[i]!=NULL)
        {
            count++;
            *index = i;
        }
    }
    return count;
}

string longest_common_prefix(vector<string> & str)
{
    string result="";
    trienode* root = new trienode();
    for(auto s : str)
    {
        insert_into_trie(s, root);
    }
    int index;
    trienode* temp = root;
    while(no_of_children(temp, &index)==1 && temp->is_leaf==false)
    {
        result+=char(index+'a');
        temp=temp->current_letter_pointer[index];
    }
    return result;
}
// time: O(mn)+O(m) --> inserting into trie and traversing through trie
// space: O(m) --> storing nodes in trie

int main(){

    vector<string> str = {"dog","racecar","car"};
    cout << longest_common_prefix(str) << endl;

    return 0;
}// end of main