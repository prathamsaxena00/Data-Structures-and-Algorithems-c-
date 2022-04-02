#include <iostream>
using namespace std;

int interpolation(int arr[], int key, int n)
{

    int h, l, p;
    float s;
    l = 0;
    h = n - 1;

    p = l + ((key - arr[l]) * (h - l) / (arr[h] - arr[l]));
    if (arr[p] == key)
    {
        return p;
    }
    else if (arr[p] > key)
    {
        h = p - 1;
    }
    else
    {
        h = p + 1;
    }
    return p;
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
    cout << interpolation(arr, key, n);

    return 0;
}