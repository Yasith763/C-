#include <iostream>
using namespace std;
void sorting(int n, int *arr)
{
    int i = 1;
    int temp = arr[n - 1];
    while (i < n - 1)
    {
        if (temp < arr[n - (i + 1)])
        {
            arr[n - i] = arr[n - (i + 1)];
            for (int j = 0; j < n; j++)
            {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
        else
        {
            arr[n - i] = temp;
            for (int j = 0; j < n; j++)
            {
                cout << arr[j] << " ";
            }
        }
        i++;
    }
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
    sorting(n, arr);
}