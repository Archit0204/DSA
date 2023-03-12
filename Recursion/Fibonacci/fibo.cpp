#include<iostream>

using namespace std;

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fibo(n-1) + fibo(n-2);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int ans = fibo(n);

    cout << "The nth term is " << ans << endl;

    return 0;
}