#include<iostream>

using namespace std;

int binary(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = (start)/2 + (end)/2;      // this formula is used to avoid errors in case of larger values of start and end

    while(start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{
    int even[8] = {1, 4, 9, 13, 19, 21, 24, 28};
    int odd[5] = {2, 4, 8, 14, 18};
    int index_even, index_odd;

    int key;

    cout << "Enter the key: ";
    cin >> key;

    index_even = binary(even, 8, key);
    
    cout << key << " is present in the array at index " << index_even << endl;

    index_odd = binary(odd, 5, key);

    cout << key << " is present in the array at index " << index_odd << endl;

    return 0;
}