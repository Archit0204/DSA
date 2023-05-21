#include<iostream>
#include<stack>

using namespace std;

int main()
{
    string s;

    cout << "Enter a string: ";
    cin >> s;
 
    stack<char> rev;

    for (int i=0;i<s.length();i++)
    {
        char ch = s[i];
        rev.push(ch);
    }

    string ans = "";

    while(!rev.empty())
    {
        char ch = rev.top();
        ans.push_back(ch);
        rev.pop();
    }

    cout << "The answer is: " << ans;

    return 0;
}