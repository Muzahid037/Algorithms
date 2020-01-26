#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,imin,value,hole;
  cin>>n;
  int a[n];
  for(int k=0;k<n;k++)
  {
      cin>>a[k];
  }
 for(int i=1;i<=n-1;i++){
  value=a[i];
  hole=i;
  while(hole>0&&a[hole-1]>value)
  {
      a[hole]=a[hole-1];
      hole--;
  }
  a[hole]=value;
 }

   for(int k=0;k<n;k++)
  {
      cout<<a[k]<<" ";
  }

  return 0;
}
