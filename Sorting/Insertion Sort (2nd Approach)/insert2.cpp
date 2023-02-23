#include<iostream>

using namespace std;

void insertion(int* arr, int n)
{
    for (int i =0;i<n;i++)
    {
        int j = i;
        while(j>0 && arr[j - 1] > arr[j])
        {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

int main()
{
    int n;

    cout << "Enter the size: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter the values in the array: ";

    for (int i =0;i<n;i++)
    {
        cin >> arr[i];
    }

    insertion(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete []arr;

    return 0;
}