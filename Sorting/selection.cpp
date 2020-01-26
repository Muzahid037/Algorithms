#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,imin;
  cin>>n;
  int a[n];
  for(int k=0;k<n;k++)
  {
      cin>>a[k];
  }
  for(int i=0;i<n-1;i++)
  {
  imin=i;
  for(int j=i+1;j<n;j++)
  {
      if(a[imin]>a[j])
      {
          imin=j;
      }
  }
      swap(a[i],a[imin]);
  }
      for(int m=0;m<n;m++)
  {
      cout<<a[m]<<" ";
  }

    return 0;
}
