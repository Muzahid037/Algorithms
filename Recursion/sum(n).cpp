#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{   int res;
    if(n==0){ return 0;}
    else {return sum(n-1)+n;}  ///else dilew hoi na dilew hoi

    return res;
}

int main()
{
    int x;
    cin>>x;
    cout<<sum(x);

    return 0;
}
