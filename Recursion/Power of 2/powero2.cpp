#include <iostream>

using namespace std;

int power(int n)
{
    if (n == 0)
    {
        return 1;
    }

    // int smaller = power(n-1);
    // int bigger = 2 * smaller;

    return 2 * power(n - 1);
    // return bigger;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int ans = power(n);

    cout << "The answer is " << ans << endl;

    return 0;
}