#include<iostream>

using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int row = 3;
    int col = 3;

    int count = 0;
    int total = row * col;                                  // no. of total elements equal to rows and columns

    int startingRow = 0;
    int endingRow = row - 1;
    int startingCol = 0;
    int endingCol = col - 1;

    while (count < total)
    {
        // printing first row
        for(int index = startingCol;index<=endingCol && count < total;index++)
        {
            cout << arr[startingRow][index] << " ";
            count++;
        }
        startingRow++;

        // printing last column
        for (int index = startingRow;index<=endingRow && count < total;index++)
        {
            cout << arr[index][endingCol] << " ";
            count++;
        }
        endingCol--;

        // printing last row
        for (int index = endingCol;index>=startingCol && count < total;index--)
        {
            cout << arr[endingRow][index] << " ";
            count++;
        }
        endingRow--;

        // printing first column
        for (int index = endingRow;index>=startingRow && count < total;index--)
        {
            cout << arr[index][startingCol] << " ";
            count++;
        }
        startingCol++;
    }

    return 0;
}