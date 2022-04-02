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

        int v;
        v = arr[i];
        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                arrr[i] = i;
            }
        }
        arrr[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {

        cout << arrr[i] << " ";
    }

    return 0;
}