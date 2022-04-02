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
    int p;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            p = i;
            break;
        }
    }
    cout << "the first peak element is " << arr[p] << endl;
    cout << "index of peak element is " << p;
    return 0;
}