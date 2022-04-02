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
        int counter = 0;
        int v;
        v = arr[i];
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == v)
            {
                counter++;
            }

            arrr[i] = counter;
        }
    }
    for (int i = 0; i < n; i++)
    {

        cout << arrr[i] << " ";
    }

    return 0;
}