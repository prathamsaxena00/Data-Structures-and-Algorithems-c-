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
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > maxnum)
        {
            maxnum = arr[i];
        }
    }
    cout << "the greatest number is " << maxnum;
    return 0;
}