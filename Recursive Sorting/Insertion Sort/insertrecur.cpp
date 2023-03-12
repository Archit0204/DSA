#include<iostream>

using namespace std;

void insert(int* arr, int s, int n)
{
    // s = current size of the array that is to be sorted

    if (s>=n || n == 1 || n == 0)
    {
        return ;
    }

    int j = s;

    while (j>=0 && arr[j-1] > arr[j])
    {
        swap(arr[j-1], arr[j]);
        j--;
    }

    insert(arr,s+1,n);
}

int main()
{
    int arr[] = {8,5,2,9,4,1};

    int n = 6;

    insert(arr, 1, n);

    for (int i =0;i<6;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}