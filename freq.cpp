#include "bits/stdc++.h"

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    map<int, int> M;

    for (int i = 0; i < n; i++)
    {
        M[array[i]]++;
    }

    for (auto it : M)
    {
        cout << it.first << " -> " << it.second << endl;
    }
}