/*
Write a recursive solution to evaluate the previous polynomial for any given x and n.
Like, when x=2 and n=5, we have 1 + x + x2 + ................. + xn-1 = 31
*/
#include<bits/stdc++.h>
using namespace std;
int calPolynomial(int i,int x,int n)
{
    if(i==n) return 0;
    if(n==0) return 1;
    return (int)pow(x,i)+calPolynomial(i+1,x,n);
}
int main()
{
    int x,n,sum;
    cin>>x>>n;
    sum=calPolynomial(0,x,n);
    cout<<sum<<endl;
    return 0;
}

///----------------Another solution---------------///
/*

#include<bits/stdc++.h>
using namespace std;
void printPolynomial(int x,int i,int n,int *sum)
{
    if(i<n)
    {
        if(i==0) *sum=*sum+1;
        else
        {
            *sum=*sum+pow(x,i);
        }
        printPolynomial(x,i+1,n,sum);
    }
}

int main()
{
    int x,n,sum=0;
    cin>>x>>n;
    printPolynomial(x,0,n,&sum);
    cout<<sum<<endl;
    return 0;
}
*/
