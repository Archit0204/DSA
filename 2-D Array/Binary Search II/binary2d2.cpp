#include<iostream>

using namespace std;

bool search(int arr[][5], int target)
{
    int row = 5;
    int col = 5;

    int rowIndex = 0;
    int colIndex = col - 1;

    while (rowIndex < row && colIndex >= 0)
    {
        if (target == arr[rowIndex][colIndex])
        {
            return true;
        }

        if (target < arr[rowIndex][colIndex])
        {
            colIndex--;
        }
        else
        {
            rowIndex++;
        }
    }
    return false;
}

int main()
{
    int arr[5][5] = { { 1, 4, 7, 11, 15 }, { 2, 5, 8, 12, 19 }, { 3, 6, 9, 16, 22 }, { 10, 13, 14, 17, 24 }, { 18, 21, 23, 26, 30 } };

    int target;

    cout << "Enter a target: ";
    cin >> target;

    if (search(arr, target))
    {
        cout << target << " is present";
    }
    else
    {
        cout << target << " is not present";
    }

        return 0;
}