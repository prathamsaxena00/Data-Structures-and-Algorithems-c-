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
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    int el, p;
    cout << "enter the element u wann insert ";
    cin >> el;
    cout << "enter position ";
    cin >> p;
    int arrr[n + 1];
    for (int i = 0; i < p; i++)
    {
        arrr[i] = arr[i];
    }
    arrr[p] = el;
    for (int i = p + 1; i < n + 1; i++)
    {

        arrr[i] = arr[i - 1];
    }

    for (int i = 0; i < n + 1; i++)
    {

        cout << arrr[i] << " ";
    }

    return 0;
}