#include<bits/stdc++.h>
using namespace std;
vector<int>divisors[1000002];

void divi(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j+=i)
        {
            divisors[j].push_back(i);
            cout<<i<<" is divisor of "<<j<<endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    divi(n);

    for(vector<int>::iterator it=divisors[7].begin(); it!=divisors[7].end(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}
