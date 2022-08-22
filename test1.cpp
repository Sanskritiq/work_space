#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> vec = {2, 4, 1, 5, 3, 6, 4, 7};
    cout << vec.size() << endl;
    auto itr1 = vec.begin()+2;
    auto itr2 = vec.begin()+6;
    vec.erase(itr1, itr2);
    cout << vec.size() << endl;
    for(int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}// end of main