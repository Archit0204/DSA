#include<iostream>

using namespace std;

void update (int** p2)
{
    // CHANGE -> NO
    //p2 = p2 + 1; 

    // CHANGE -> YES
    //*p2 = *p2 + 1;

    // CHANGE -> YES
    **p2 = **p2 + 1;
}

int main()
{
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    /*
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
    */

    /*
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;
    */

    /*
    cout << p2 << endl;
    cout << &p << endl;
    */

    cout << "Before " << i << endl;
    cout << "Before " << p << endl;
    cout << "Before " << p2 << endl;
    update(p2);
    cout << "After " << i << endl;
    cout << "After " << p << endl;
    cout << "After " << p2 << endl;

    return 0;
}