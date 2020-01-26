#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum=1,n,m,i,j,k,t,max;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>max;
        sum=1;
        for(n=0;sum<max;n++)
            sum=((n*(n-1))/2)*(pow(2,n)-1-n);
        cout<<sum<<endl;
        cout<<n-2<<endl;
    }
    return 0;
}
