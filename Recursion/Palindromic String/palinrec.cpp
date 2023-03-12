#include<iostream>

using namespace std;

bool palindrome(string& st, int s, int e)
{
    if (s>e)
    {
        return true;
    }

    if (st[s] == st[e])
    {
        s++;
        e--;
        return palindrome(st,s,e);
    }

    return false;
}

int main()
{
    string s;

    cout << "Enter a string: ";
    cin >> s;

    if(palindrome(s, 0, s.length()-1))
    {
        cout << "The string is palindrome" << endl;
    }

    else
    {
        cout << "The string is not palindrome" << endl;
    }

    return 0;
}