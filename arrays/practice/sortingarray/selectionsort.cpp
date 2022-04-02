#include <iostream>
using namespace std;
int selectionsort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int t;
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
            cout << endl;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
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
    selectionsort(arr, n);
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    return 0;
}