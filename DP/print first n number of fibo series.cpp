#include<bits/stdc++.h>
using namespace std;

int arr[20];          ///dppppppppppppppppppp

int fib(int n)
{   int res;
    if(n==0 || n==1){ return 1;}
    else if(arr[n]==0) {arr[n]=fib(n-1)+fib(n-2);}  ///else dilew hoi na dilew hoi

    return arr[n];
}

int main()
{
    int x;
    cin>>x;
    for(int i=0;i<=x;i++)
    {
        cout<<fib(i)<<" ";
    }

    return 0;
}


