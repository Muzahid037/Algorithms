#include<bits/stdc++.h>
using namespace std;
vector<int>a;

void divisors(int n)
{
    int j=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
           a.push_back(i);
           a.push_back(n/i);
            //cout<<a[j-2]<<" "<<a[j-1]<<endl;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    divisors(n);

    sort(a.begin(),a.end());

    for(vector<int>::iterator it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}

