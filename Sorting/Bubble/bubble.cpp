#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v = {3,1,2,7,5,9,8};

    int n = v.size();

    for (int i=1;i<n;i++)
    {
        for (int j = 0;j<n-i;j++)
        {
            if (v[j] > v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }

    for (int i:v)
    {
        cout << i << " ";
    }

    return 0;
}