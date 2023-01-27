#include<bits/stdc++.h>
using namespace std;

bool binary_search(vector<int> arr, int k) {
    int low = 0, high = arr.size() - 1;
    int first = -1, second = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == k) {
            if (mid > 0 && arr[mid - 1] == k) {
                second = mid;
                high = mid - 1;
            } else {
                first = mid;
                low = mid + 1;
            }
        } else if (arr[mid] < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (first != -1 && second != -1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    if (binary_search(arr, k)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
