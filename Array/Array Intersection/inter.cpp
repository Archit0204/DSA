#include<iostream>

using namespace std;

void intersection(int arr1[], int size1, int arr2[], int size2)
{
    int i = 0, j = 0;

    while(i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }

        else if (arr1[i] < arr2[j])
        {
            i++;
        }

        else
        {
            j++;
        }
    }
}

int main() // It is given that array are sorted in the increasing order
{
    int arr1[100], arr2[100], size1, size2;

    cout << "Enter the size of the 1st array: ";
    cin >> size1;

    cout << "Enter the values in the 1st array: ";

    for (int i = 0;i<size1;i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the size of the 2nd array: ";
    cin >> size2;

    cout << "Enter the values in the 2nd array: ";

    for (int i = 0;i<size2;i++)
    {
        cin >> arr2[i];
    }

    intersection(arr1, size1, arr2, size2);

    return 0;
}