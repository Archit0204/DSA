#include<iostream>

using namespace std;

void change(string demo)
{
    demo.push_back('!');
}

int main()
{
    string demo = "hello";

    change(demo);

    cout << demo;

    return 0;
}