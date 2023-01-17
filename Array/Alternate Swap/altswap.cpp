#include<iostream>

using namespace std;

void altswap(int size, int arr[])
{
    for(int i=0;i<size;i=i+2)
    {
        if(i + 1 < size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int arr[100], size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the values in the array: ";

    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }

    altswap(size,arr);

    cout << "Swapped values in the array are: " << endl;

    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
}