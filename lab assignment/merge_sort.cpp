#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> a)
{
    if (a.size() <= 1)
        return a;

    int mid = a.size() / 2;
    vector<int> b, c;

    for (int i = 0; i < mid; i++)
    {
        b.push_back(a[i]);
    }

    for (int i = mid; i < a.size(); i++)
    {
        c.push_back(a[i]);
    }

    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);
    vector<int> sorted_a;

    int idx1 = 0;
    int idx2 = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (idx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if (idx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }

        else if (sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}

void removeDuplicatesAndSort(vector<int> &arr) {
    merge_sort(arr);
    int j = 0;
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[arr.size() - 1];
    arr.resize(j);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

int main()
{

    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // vector<int>sorted_a = merge_sort(a);

   
     removeDuplicatesAndSort(a);
}