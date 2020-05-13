#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int prime[1000000009],nPrime;
int mark[1000000009];         ///mark[i]==0 >if  i==prime
void sieve(int n)
{
    int i,j,limit=sqrt(n)+2;
    ///1 is not prime,so mark it 1
    mark[1]=1;
    ///almost all the evens are not prime
    for(int i=4;i<=n;i+=2)
    {
        mark[i]=1;
    }
    ///2 is prime
    prime[nPrime++]=2;
    ///run loop for only odds
    for(int i=3;i<=n;i+=2)
    {
        ///if not prime no need to do "multiple cutting"
        if(mark[i]==0)
        {
            ///i is prime
            prime[nPrime++]=i;
            ///if we don't do it,following i*i may be overflow
            if(i<=limit)
            {
                ///loop that odd multiples of i
                ///greater than i*i
                for(j=i*i;j<=n;j+=i*2)
                {
                    ///mark j not prime
                    mark[j]=1;
                }
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;

}
