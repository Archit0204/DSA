#include <iostream>

using namespace std;

int getsum(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }

    else
    {
        int remaining = getsum(arr + 1, size - 1);
        int sum = arr[0] + remaining;
        return sum;
    }
}

int main()
{
    int arr[5] = {3, 5, 7, 5, 1};

    int ans = getsum(arr, 5);

    cout << "Sum of the Array is " << ans << endl;

    return 0;
}