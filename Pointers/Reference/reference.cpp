#include<iostream>

using namespace std;

void check(int* &ptr)
{
    cout << ptr << endl;

    int* i = ptr;
    cout << i << endl;

    //int *i = ptr;


}

int main()
{
    int *ptr = new int;
    *ptr = 5;

    cout << *ptr << endl;

    // if ptr is printed, address will be printed
    // if *ptr is printed, it will be derefernced and value will be printed

    check(ptr);

    cout << *ptr;

    return 0; 
}