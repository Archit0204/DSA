#include<iostream>

using namespace std;

void rowsum(int arr[][3], int row, int col)
{
    for (int i=0;i<row;i++)
    {
        int sum = 0;
        for (int j = 0;j<col;j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

int main()
{
    int arr[3][3] = {1,2,4,3,6,5,9,8,7};

    rowsum(arr,3,3);

    return 0;
}