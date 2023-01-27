#include <bits/stdc++.h>
using namespace std;
vector<int> even_generator(vector<int> input);
int main() 
{
    vector<int> input = {10, 7, 16, 9, 3};
    vector<int> evens = even_generator(input);
    for (int i = 0; i < evens.size(); i++) 
    {
        cout << evens[i] << " ";
    }
    return 0;
}
vector<int> even_generator(vector<int> input) 
{
    vector<int> even_number;
    for (int i = 0; i < input.size(); i++) 
    {
        if (input[i] % 2 == 0) 
        {
            even_number.push_back(input[i]);
        }
    }
    return even_number;
}