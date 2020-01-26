
#include<bits/stdc++.h>
using namespace std;

int gcd(int n1,int n2);
int main()
{
    int n1=8,n2=16;
    cout<<gcd(n1,n2);
}

int gcd(int n1,int n2)
{
    while(n1!=n2){
    n2 -= n1;
    }
    return n1;
}
