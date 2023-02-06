#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v = {3, 1, 2, 7, 5, 9, 8};
    int i, j;
    int n = v.size();

    for (i=1;i<n;i++)
    {
        int temp = v[i];
        for (j=i-1;j>=0;j--)
        {
            if (v[j] > temp)
            {
                v[j+1] = v[j];
            }
            else
            {
                break;
            }
        }
        v[j+1] = temp;
    }

    for (int i:v)
    {
        cout << i << " ";
    }

    return 0;
}