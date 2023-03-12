#include<iostream>

using namespace std;

int main()
{
    int *ptr = new int;

    cout << *ptr;

    // if ptr is printed, address will be printed
    // if *ptr is printed, it will be derefernced and value will be printed

    return 0; 
}