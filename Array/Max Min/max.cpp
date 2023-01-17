#include<iostream>

using namespace std;

int getmax(int size, int arr[])
{
    int max = INT_MIN;

    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    return max;
}

int getmin(int size, int arr[])
{
    int min = INT_MAX;

    for (int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int size, arr[100];

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the values in the array: ";
    
    for (int i=0;i<size;i++)
    {
        cin >> arr[i];
    }

    cout << "The maximum value in the array is " << getmax(size,arr) << endl;
    cout << "The minimum value in the array is " << getmin(size,arr) << endl;

    return 0;
}