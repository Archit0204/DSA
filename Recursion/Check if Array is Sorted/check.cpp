#include<iostream>

using namespace std;

bool ifsorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        bool ans = ifsorted(arr+1,size-1);
        return ans;
    }
}

int main()
{
    int arr[6] = {2,3,6,8,9,11};

    bool ans = ifsorted(arr,6);

    if (ans)
    {
        cout << "The array is sorted" << endl;
    }

    else
    {
        cout << "The array is not sorted" << endl;
    }

    return 0;
}