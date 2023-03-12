#include<iostream>

using namespace std;

/*
void print(int n) // head recursion
{
    if(n == 0)
    {
        return ;
    }

    print(n-1);

    cout << n << endl;
} */

void print(int n) // tail recursion
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    
    print(n - 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    print(n);
}