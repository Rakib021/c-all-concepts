#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    v.pop_back();
    int sz = v.size();

    int lastElement = v.back();
    cout<<lastElement<<"\n";

    int firstElement = v.front();
    cout<<firstElement<<"\n";
    for (int i = 0; i < sz; i++)
    {
        cout << v[i] << " ";
    }
}