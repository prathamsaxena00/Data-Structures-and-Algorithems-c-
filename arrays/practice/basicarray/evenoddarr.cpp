#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int arrr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {

            arrr[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {

            arrr[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arrr[i] << " ";
    }
    return 0;
}