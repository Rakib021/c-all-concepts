#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[20];
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum is :" << sum;
}
