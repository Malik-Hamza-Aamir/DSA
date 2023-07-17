#include <iostream>
using namespace std;

void reverse(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }

    swap(arr[l], arr[r]);
    reverse(arr, l + 1, r - 1);
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

    reverse(arr, 0, n - 1);

    cout << "\nReversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
