#include <iostream>
using namespace std;

void reverse(int arr[], int i, int n)
{
    if (i >= n / 2)
    {
        return;
    }

    swap(arr[i], arr[n - i - 1]);
    reverse(arr, i + 1, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    reverse(arr, 0, n);

    cout << "\nReversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
