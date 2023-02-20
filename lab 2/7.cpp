#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str);
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (isPalindrome(str)) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }
    return 0;
}

bool isPalindrome(string str) {
    deque<char> dqu;
    for (int i = 0; i < str.length(); i++) {
        dqu.push_back(str[i]);
    }
    while (dqu.size() > 1) {
        if (dqu.front() != dqu.back()) {
            return false;
        }
        dqu.pop_front();
        dqu.pop_back();
    }
    return true;
}