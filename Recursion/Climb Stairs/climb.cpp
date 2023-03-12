// This is the leetcode problem no. 70
// It couldnt be solved there because of TLE and will require Dynamic Programming

#include <iostream>

using namespace std;

int climb(int n)
{
    if (n < 0)
    {
        return 0;
    }

    if (n == 0)
    {
        return 1;
    }

    int ans = climb(n - 1) + climb(n - 2);

    return ans;
}

int main()
{
    int n;

    cout << "Enter the nth stair: ";
    cin >> n;

    int ans = climb(n);

    cout << "The number of steps to reach " << n << " stairs is " << ans << endl;

    return 0;
}