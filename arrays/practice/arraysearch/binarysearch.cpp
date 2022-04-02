#include <iostream>
using namespace std;

int binarysearch(int arr[], int key, int n)
{

    int l = 0;
    int h = n;

    while (l < h)
    {
        int mid = (l + h) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
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

    int key;
    cin >> key;
    cout << binarysearch(arr, key, n);

    return 0;
}