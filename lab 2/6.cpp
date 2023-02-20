#include<bits/stdc++.h>
using namespace std;

void deleteValue(list<int> &l, int value) {
    l.erase(remove(l.begin(), l.end(), value), l.end());
}

int main() {
    list<int> l = {7, 3, 8, 4, 5, 4};
    int value = 4;

    cout << "Before deletion: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    deleteValue(l, value);

    cout << "After deletion: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}
