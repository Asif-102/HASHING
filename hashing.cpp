#include "bits/stdc++.h"

using namespace std;

int main(void)
{
    map<int, int> M;

    M[3] = 9;
    M[2] = 3;
    M.insert(make_pair(1, 4));

    cout << "key"
         << "\t"
         << "Value\n";
    for (auto item : M)
    {
        cout << item.first << "\t " << item.second << endl;
    }

    unordered_map<char, int> UM;
    UM['a'] = 77;
    UM['z'] = 44;
    UM.insert(make_pair('c', 333));

    cout << "key"
         << "\t"
         << "Value\n";
    for (auto item : UM)
    {
        cout << item.first << "\t " << item.second << endl;
    }
}