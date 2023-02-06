// This Binary Search algo is applicabe if the 2-D array is sorted row wise such that it forms a sorted linear array 

#include<iostream>

using namespace std;

bool search(int arr[][4], int target)
{
    int row = 3;
    int col = 4;

    int n = row * col;

    int start = 0;
    int end = n - 1;

    int mid = start + (end-start)/2;

    while(start<=end)
    {
        int element = arr[mid/col][mid%col];

        if (target == element)
        {
            return true;
        }

        if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}

int main()
{
    int arr[3][4] = { { 1, 3, 5, 7 }, { 10, 11, 16, 20 }, { 23, 30, 34, 60 } };

    int target;

    cout << "Enter a target: ";
    cin >> target;

    if (search(arr,target))
    {
        cout << target << " is present";
    }

    else
    {
        cout << target << " is not present";
    }
}