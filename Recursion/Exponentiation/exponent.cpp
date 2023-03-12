#include <iostream>

using namespace std;

int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }

    if (y == 1)
    {
        return x;
    }

    int ans = power(x,y/2);

    if (y % 2 == 0)
    {
        return ans * ans;
    }
    
    else
    {
        return x * ans * ans;
    }
}

int main()
{
    int x, y;

    cout << "Enter the number: ";
    cin >> x;

    cout << "Enter the power: ";
    cin >> y;

    int ans = power(x, y);

    cout << "The answer is " << ans << endl;

    return 0;
}