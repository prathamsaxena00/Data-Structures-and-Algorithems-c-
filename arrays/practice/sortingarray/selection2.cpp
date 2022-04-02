#include <iostream>
using namespace std;
int selectionsrt(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i = i - 1)
    {
        int p = 0;
        int l = arr[i];
        for (int j = i; j >= 0; j = j - 1)
        {
            if (arr[j] >= l)
            {
                p = j;
            }
        }
        int temp;
        temp = arr[i];
        arr[i] = arr[p];
        arr[p] = temp;
        for (int i = 0; i < n; i++)
        {

            cout << arr[i] << " ";
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
    selectionsrt(arr, n);
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}