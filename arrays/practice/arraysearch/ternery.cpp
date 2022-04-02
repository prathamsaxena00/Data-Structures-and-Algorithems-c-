#include <iostream>
using namespace std;

int ternery(int arr[], int key, int n)
{
    int l = 0;
    int h = n - 1;
    int mid1, mid2;
    mid1 = l + (h - l) / 3;
    mid2 = h - (h - l) / 3;
    while (l <= h)
    {
        if (key == arr[mid1])
        {
            return mid1;
        }
        else if (key == arr[mid2])
        {
            return mid2;
        }
        else if (key < arr[mid1])
        {
            h = mid1 - 1;
        }
        else if (key > arr[mid1])
        {
            l = mid1 + 1;
        }
        else if (key < arr[mid2])
        {
            h = mid2 - 1;
        }
        else
        {
            l = mid2 + 1;
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
    cout << "enter the key " << endl;
    cin >> key;
    cout << "the position is " << ternery(arr, key, n);

    return 0;
}