#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int n=num;

  stringstream ss;
  ss<<num;
  string s;
  ss>>s;
  int len=s.length();

  int sum=0;
  int rem;
  while(num!=0)
  {
      rem=num%10;
      sum+=pow(rem,s.length());          ///why not give correct ans for 153
      num/=10;
  }
  //cout<<sum<<endl;

  if(sum==n)
  {
      cout<<"Armstrong!"<<endl;
  }
  else
  {
      cout<<"NO"<<endl;
  }


    return 0;
}
