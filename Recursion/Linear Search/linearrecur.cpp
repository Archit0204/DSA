#include<iostream>

using namespace std;

bool search(int* arr, int size, int key)
{
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }
    
    else
    {
        bool ans = search(arr+1,size-1,key);
        return ans;
    }
}

int main()
{
    int arr[7] = {7,5,3,8,1,9,12};

    int key;

    cout << "Enter the key: ";
    cin >> key;

    bool ans = search(arr,7,key);

    if (ans)
    {
        cout << "The key is present" << endl;
    }

    else
    {
        cout << "The key is not present" << endl;
    }

    return 0;
}