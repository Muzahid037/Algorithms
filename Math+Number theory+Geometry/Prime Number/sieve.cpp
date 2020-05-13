#include<bits/stdc++.h>
using namespace std;
int prime[300000],nPrime;
int mark[1000002];   ///give result of a num is prime or not  mark[i]==1(not_prime) , mark[i]==0(prime)

void sieve(int n)   ///list of prime number
{
    int i,j,limit;
    limit=sqrt(n+1);
    mark[1]=1;     ///1 is not prime
    prime[nPrime++]=2; ///2 is prime
    for(int i=4;i<=n;i+=2)  ///all evens are not prime except 2
    {
        mark[i]=1;
    }
    for(int i=3;i<=n;i++) ///loop for only odd
    {
        if(mark[i]==0)  ///if i is prime or mark[i]==0
        {
           prime[nPrime++]=i;

           if(i<=limit)
           {

               cout<<i<<" cuts ";
            for(int j=i*i;j<=n;j+=2*i)
            {
                cout<<j<<" ";
                mark[j]=1;
            }
            cout<<endl;
           }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    sieve(n);

    cout<<"check a number in the range 1-n is prime or not :";
   int x;
   cin>>x;
   if(mark[x]==0){cout<<x<<" is prime"<<endl;}
   else {cout<<x<<" is Not prime"<<endl;}

    cout<<endl<<"Number of prime number in the range of 1 to n is : "<<nPrime<<endl;
    cout<<"List of prime numbers : ";
    for(int i=0;i<nPrime;i++)
    {
        cout<<prime[i]<<" ";
    }
    cout<<endl;

    return 0;
}
