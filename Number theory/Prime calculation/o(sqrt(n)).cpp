#include<bits/stdc++.h>
using namespace std;

int check_prime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    else
    {
        int limit=sqrt(n+1);
        for(int i=2; i*i<=n; i++)      ///2 er jonno loop er vitrei dhukbe nah
        {
            //cout<<n%i<<endl;
            if(n%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;

    int x=check_prime(n);

    if(x==0)
    {
        cout<<"Not prime"<<endl;
    }
    else if(x==1)
    {
        cout<<"Prime"<<endl;
    }
}
