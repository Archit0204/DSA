#include<iostream>

using namespace std;

void merge(int* arr, int s, int e)
{
    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* first = new int[len1];
    int* second = new int[len2];

    int mainArrayIndex = s;

    for (int i = 0;i<len1;i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;

    for (int i = 0;i<len2;i++)
    {
        second[i] = arr[mainArrayIndex++];
    } 

    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = s;

    while(index1<len1 && index2<len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }

    }

    while(index1<len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2<len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergesort(int* arr, int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int mid = s + (e-s)/2;

    mergesort(arr,0,mid); // sorting left part

    mergesort(arr,mid+1,e); // sorting right part

    merge(arr,s,e); // merging

}

int main()
{
    int arr[5] = {7,3,1,8,2};

    int n = 5; // size

    mergesort(arr,0,n-1);

    for (int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}