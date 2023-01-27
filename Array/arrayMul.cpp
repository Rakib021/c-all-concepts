#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[20];
    int mul = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        mul *= arr[i];
    }
    cout << "Sum is :" << mul;
}
