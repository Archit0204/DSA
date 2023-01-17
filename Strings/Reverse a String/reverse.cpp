#include<iostream>

using namespace std;

int getlength(char str[])
{
    int count = 0;
    int i = 0;

    while(str[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
}

void reverse(char str[])
{
    int length = getlength(str);

    int s = 0;
    int e = length - 1;

    while (s <= e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }
}

int main()
{
    char str[20];

    cout << "Enter a string: ";
    cin >> str;

    reverse(str);

    cout << "Reverse of string is " << str;

    return 0;
}