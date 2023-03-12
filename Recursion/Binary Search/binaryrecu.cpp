#include <iostream>

using namespace std;

int binary(int *arr, int s, int e, int key)
{
    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }

    if (key > arr[mid])
    {
        return binary(arr, mid + 1, e, key);
    }

    else
    {
        return binary(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 7, 8, 9};

    int key;

    cout << "Enter the Key: ";
    cin >> key;

    int ans = binary(arr, 0, 5, key);

    cout << "The key is present at the " << ans << endl;

    return 0;
}