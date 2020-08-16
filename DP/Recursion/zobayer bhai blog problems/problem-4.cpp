/*
Write a recursive solution to print the polynomial series for any input n:
1 + x + x2 + ................. + xn-1
*/

#include<bits/stdc++.h>
using namespace std;

void printPolynomial(int i,int n)
{
    if(i<n)
    {
        if(i==0) cout<<"1";
        else
        {
            cout<<" + x";
            if(i>1)
            {
                cout<<"^"<<i;
            }
        }
        printPolynomial(i+1,n);
    }
}

void printRevPolynomial(int i,int n)
{
    if(i<n)
    {
        printRevPolynomial(i+1,n);
        if(i==0) cout<<" + 1";
        else
        {
            if(i==n-1) cout<<"x";
            else cout<<" + x";
            if(i>1)
            {
                cout<<"^"<<i;
            }
        }
    }
}

int main()
{
    //cout<<"Size of array:"<<endl;
    int n;
    cin>>n;
    //printPolynomial(0,n);
    printRevPolynomial(0,n);
    return 0;
}
