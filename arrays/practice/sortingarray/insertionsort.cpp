#include <iostream>
using namespace std;
int insertionsort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int l = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (l > arr[j - 1] && l < arr[i])
            {
                int t = l;
                arr[i] = arr[j];
                arr[j] = t;
            }
            for (int i = 0; i < n; i++)
            {
                cout << arr[i];
            }
        }
    }
    return 0;
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
    insertionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}