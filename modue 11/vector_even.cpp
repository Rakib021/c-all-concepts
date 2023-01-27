#include<bits/stdc++.h>
using namespace std;

vector<int> even_generator(vector<int> arr) {
    vector<int> even_numbers;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            even_numbers.push_back(arr[i]);
        }
    }
    return even_numbers;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
   vector<int> evens = even_generator(arr);
    for (int i = 0; i < evens.size(); i++) {
       cout << evens[i] << " ";
    }
    return 0;
}