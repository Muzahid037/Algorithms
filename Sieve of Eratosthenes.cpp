#include<bits/stdc++.h>
using namespace std;

string sv(int n,int num)
{
    bool isPrime[n+5];
    memset(isPrime,true,sizeof(isPrime));

    for(int i=2; i*i<=n; i++)
    {
        if(isPrime[i]==true)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
    if(isPrime[num]==1 && num>1)
    {
        return "yes";
    }
    else
    {
        return "no";
    }

}

int main()
{
    int range,num;;
    cin>>range>>num;

    cout<<sv(range,num)<<endl;

    return 0;
}
