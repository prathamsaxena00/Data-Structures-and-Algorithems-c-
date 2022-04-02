#include <iostream>
using namespace std;

int summ(int arr[], int n1, int n2)
{

    int sum = 0;
    for (int i = n1; i <= n2; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "the sum is " << summ(arr, 0, 2);

    return 0;
}