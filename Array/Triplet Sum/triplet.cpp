#include<iostream>

using namespace std;

void triplet(int arr[], int size, int n)
{
    for (int i = 0;i<size;i++)
    {
        for (int j = i+1;j<size;j++)
        {
            for (int k = j + 1;k<size;k++)
            {
                if (arr[i] + arr[j] + arr[k] == n)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
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

    triplet(arr, size, n);

    return 0;
}