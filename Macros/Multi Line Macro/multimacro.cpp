#include<iostream>

#define ELE 1, \
            2, \
            3

using namespace std;

int main()
{
    int arr[] = {ELE};

    for (int i=0;i<3;i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}