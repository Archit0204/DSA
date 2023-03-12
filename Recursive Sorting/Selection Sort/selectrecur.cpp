#include <iostream>

using namespace std;

void select(int *arr, int s, int n)
{
    if (n == 0 || n == 1 || s >= n)
    {
        return;
    }

    int min = s;

    for (int i = s + 1; i < n; i++)
    {
        if (arr[min] > arr[i])
        {
            min = i;
        }
    }

    swap(arr[s], arr[min]);

    select(arr, s + 1, n);
}

int main()
{
    int arr[] = {7, 5, 1, 3, 9, 2};

    int n = sizeof(arr) / sizeof(int);

    select(arr, 0, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}