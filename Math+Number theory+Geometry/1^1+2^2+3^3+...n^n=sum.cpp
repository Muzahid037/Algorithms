///Bismillahir Rahmanir Rahim
/**
 *    author: s0L0
 *
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=pow(i,i);
    }

    cout<<sum<<endl;




  return 0;
}
