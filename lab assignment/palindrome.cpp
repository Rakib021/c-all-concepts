#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string word, int start, int end)
{
    if (start == end)
        return true;
    if (word[start] != word[end])
        return false;
    if (start < end + 1)
        return isPalindrome(word, start + 1, end - 1);
    return true;
}

int main()
{
    string word;
    cin >> word;
    if (isPalindrome(word, 0, word.length() - 1))
    {
        cout << "YES"<<"\n";
    }
    else
    {
        cout << "NO"<<"\n";
    }
    return 0;
}
