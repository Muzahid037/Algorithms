#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int n=num;
    int rev=0;

    while(num!=0)
    {
        rev=(rev*10)+(num%10);
        num/=10;
    }
   // cout<<rev<<endl;

   if(rev==n)
   {
       cout<<"Palindrome"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }



    return 0;
}
