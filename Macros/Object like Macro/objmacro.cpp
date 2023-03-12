#include<iostream>

#define pi 3.14
#define DATE 30

using namespace std;

int main()
{
    cout << "The value of pi is " << pi << endl;
    cout << "Today's date is " << DATE << endl;

    int area;
    int r = 5;

    area = 2 * pi * r;

    cout << area;

    return 0;
}