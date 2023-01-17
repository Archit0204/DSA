#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v = {1,5,3,8,6,9,};

    int min;
    int n = v.size();
    
    for (int i = 0;i<n-1;i++)
    {
        min = i;
        for (int j = i+1;j<n;j++)
        {
            if(v[min] > v[j])
            {
                min = j;
            }
        }
        swap(v[i],v[min]);
    }

    for (int i:v)
    {
        cout << i << " ";
    }
}