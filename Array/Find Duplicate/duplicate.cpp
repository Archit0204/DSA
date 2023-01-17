#include<iostream>

using namespace std;

int duplicate(int arr[],int size)
{
    int sum_arr = 0;
    int sum_num = 0;

    for (int i=0;i<size;i++)
    {
        sum_arr = sum_arr + arr[i];
    }

    for (int i=0;i<size-1;i++)
    {
        sum_num = sum_num + i;
    }

    return (sum_arr - sum_num);
}

int main()
{
    int arr[100], size;

    cout << "Enter the size of the array:";
    cin >> size;

    cout << "Enter the values in the array:";

    for (int i=0;i<size;i++)
    {
        cin >> arr[i];
    }

    cout << (duplicate(arr,size));

    return 0;
}