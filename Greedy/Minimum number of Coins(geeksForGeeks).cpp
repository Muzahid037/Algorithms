
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int coin[10]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
      int N,ct=0;
      cin>>N;
      for(int j=9;j>=0;j--)
      {
          while(N>=coin[j])
          {

              cout<<coin[j]<<" ";
              N=N-coin[j];
               ct++;
              if(N==0){break;}
          }
           if(N==0){break;}
      }
      //cout<<ct<<endl;
      cout<<endl;
  }


 return 0;
}
