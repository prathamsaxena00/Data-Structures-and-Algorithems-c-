#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // put this array into bucket
    // j is unit place
    // k increments row
    int buc[n][10];
    for (int j = 0; j < 10; j++)
    {
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 10 == j)
            {
                buc[k][j] = arr[i];
                k++;
            }
        }
    }

    // put bucket back to array
    int c = 0;
    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i < n; i++)
        {
            arr[c] = buc[i][j];
            c++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}