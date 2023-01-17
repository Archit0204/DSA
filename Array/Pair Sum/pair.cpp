#include<iostream>

using namespace std;

void spair(int arr[], int size, int n)
{
    for (int i= 0;i<size;i++)
    {
        for (int j = i+1;j< size;j++)
        {
            if (arr[i] + arr[j] == n)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}

int main()
{
    int size, arr[100], n;

    cout << "Enter the sum: ";
    cin >> n; 

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the values in the array: ";

    for (int i = 0;i<size;i++)
    {
        cin >> arr[i];
    }

    spair(arr, size, n);

    return  0;
}