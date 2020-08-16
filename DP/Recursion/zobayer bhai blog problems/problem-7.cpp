/*
Write a recursive program to compute nth fibonacci number.
1st and 2nd fibonacci numbers are 1, 1.
*/
#include<bits/stdc++.h>
using namespace std;
int findNthFibo(int n)
{
    if(n<3) return 1;
    else return findNthFibo(n-2)+findNthFibo(n-1);
}
int main()
{
    int n,nthFibo;
    cin>>n;
    cout<<findNthFibo(n);
    return 0;
}

