#include<iostream>

using namespace std;

bool linear_search(int size,int arr[], int key)
{
    for (int i=0;i<size;i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int arr[100], size, key;

    cout << "Enter the size of matrix: ";
    cin >> size;

    cout << "Enter the elements in the matrix: ";

    for (int i=0;i<size;i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to search for: ";
    cin >> key;

    if(linear_search(size,arr,key))
    {
        cout << key << " is present in the array" << endl;
    }

    else
    {
        cout << key << " is not present in the array" << endl;
    }

    return 0;
}