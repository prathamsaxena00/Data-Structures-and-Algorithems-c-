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
    int maxnum = arr[0];
    int p;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > maxnum)
        {
            maxnum = arr[i];
            p = i;
        }
    }
    for (int i = p; i < n; i++)
    {

        arr[i] = arr[i + 1];
    }

    int secondmx = arr[0];
    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] > secondmx)
        {
            secondmx = arr[i];
        }
    }
    cout << "the first maximum number is " << maxnum << endl;
    cout << "the second maximum number is " << secondmx << endl;

    return 0;
}