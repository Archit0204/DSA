#include<iostream>

using namespace std;

int largestrow(int arr[][3], int row, int col)
{

    int maxi = INT_MIN;
    int index = -1;

    for (int i = 0;i<row;i++)
    {
        int sum = 0;
        for (int j = 0;j<col;j++)
        {
            sum += arr[i][j];
        }

        if (sum > maxi)
        {
            maxi = sum;
            index = i;
        }
    }

    cout << "The maximum sum is " << maxi << endl;

    return index;
}

int main()
{
    int arr[3][3] = {2,4,5,1,8,7,6,3,9};

    cout << largestrow(arr,3,3);

    return 0;
}