#include <iostream>
using namespace std;
int jumpsearch(int arr[], int key, int n, int j)
{
    int l, h, p;

    l = 0;

    h = j + l;

    while (l <= n)
    {
        if (arr[l] <= key && key <= arr[h])
        {
            for (int i = l; i <= h; i++)
            {
                if (arr[i] == key)
                {
                    p = i;
                    return p;
                    break;
                }
            }
        }
        else
        {
            l = h;
            h = h + j;
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
    cout << "what u wanna find " << endl;
    cin >> key;
    int j;
    cout << "enter the jump u want " << endl;
    cin >> j;
    cout << "its position is " << jumpsearch(arr, key, n, j);
    return 0;
}