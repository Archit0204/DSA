#include<iostream>

using namespace std;

int main()
{
    int x, y;
    int ans = 1;

    cout << "Enter the number: ";
    cin >> x;

    cout << "Enter the power: ";
    cin >> y;

    while (y>0)
    {
        if (y&1) // to check if y is odd
        {
            ans =  ans * x;
        }

        y = y >> 1; // y = y / 2

        x = x * x; // x = x ^ 2
    }

    cout << "The answer is " << ans << endl;

    return 0;
}