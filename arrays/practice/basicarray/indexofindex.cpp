#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    int arrr[n];
    for (int i = 0; i < n; i++)
    {
        arrr[i] = arr[arr[i]];
    }

    for (int i = 0; i < n; i++)
    {

        cout << arrr[i] << " ";
    }
    return 0;
}