#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    vector <bool> prime(n+1,true);

    prime[0] = prime[1] = false;

    for (int i=2;i<n;i++)
    {
        if (prime[i])
        {
            for (int j = 2*i;j<n;j=j+i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 2;i<n;i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }

    return 0;
}