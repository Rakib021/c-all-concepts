#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // n ta pass

    for (int pass = 0; pass < n; pass++)
    {
        int last = n - 1 - pass;

        for (int j = 0; j <= last - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
        cout << "\nAfter pass" << pass << ":";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

            cout<<"\n";
    }
    cout << "\n after Sorting\n";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\n";
}