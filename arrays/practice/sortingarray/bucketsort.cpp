#include <iostream>
#include <cmath>
using namespace std;
int bucket(int arr[], int n, int pl, int arrr[])
{
    int buc[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (arr[k] % pl == i)
                {
                    buc[j][i] = arr[k];
                }
            }
        }
    }

    int p = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arrr[j + p] = buc[i][j];
            p++;
        }
    }

    return 0;
}
int bucksort(int arr[], int n, int arrr[])
{
    for (int i = 1; i < 3; i++)
    {
        bucket(arr, n, pow(10, i), arrr);
    }
    return 0;
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    int arrr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bucksort(arr, n, arrr);
    for (int i = 0; i < n; i++)
    {

        cout << arrr[i] << "  ";
    }

    return 0;
}