#include<iostream>

using namespace std;

int first_occur(int arr[],int size,int key)
{
    int start = 0, end = size - 1;

    int mid = (start)/2 + (end)/2;
    int ans = -1;

    while(start<=end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = (start)/2 + (end)/2;
    }

    return ans; 
}

int last_occur(int arr[],int size,int key)
{
    int start = 0, end = size - 1;

    int mid = (start)/2 + (end)/2;
    int ans;

    while(start<=end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = (start)/2 + (end)/2;
    }

    return ans; 
}

int main()
{
    int arr[100], key, size;

    cout << "Enter the size of the array:";
    cin >> size;

    cout << "Enter the array: ";

    for (int i=0;i<size;i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    int first = first_occur(arr,size,key);

    int last = last_occur(arr,size,key);

    cout << "First index is " << first << " and last index is " << last << endl;

    return 0;
}