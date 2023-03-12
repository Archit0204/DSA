#include<iostream>

using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    //int small = factorial(n-1);
    //int big = n * small;

    return n * factorial(n-1);
    //return big;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int ans = factorial(n);

    cout << "The answer is " << ans << endl;

    return 0;
}