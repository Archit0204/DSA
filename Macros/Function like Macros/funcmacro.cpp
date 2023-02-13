#include<iostream>

#define min(a,b) (((a) < (b)) ? (a) : (b))

using namespace std;

int main ()
{
    int a = 7, b = 6;

    cout << min(a,b);

    return 0;
}