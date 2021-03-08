/*
Write a recursive program that determines whether a given sentence is palindromic or not
just considering the alpha-numeric characters ('a'-'z'), ('A'-'Z'), ('0'-'9').
*/
#include<bits/stdc++.h>
using namespace std;

bool isPlaindrome(string s,int st,int ed)
{
    if(st>ed) return true;
    if(s[st]!=s[ed]) return false;
    return isPlaindrome(s,st+1,ed-1);
}
int main()
{
    string s="";
    char ch;
    while (scanf("%c",&ch)==1)
    {
        if(ch=='\n')break;
        /// if( (ch<='z' && ch>='a') || (ch<='Z' && ch>='A') || (ch<='9' && ch>='0') ) s+=ch;
        ///or
        if(isalnum(ch)) s+=ch;
    }
    //cout<<s<<endl;
    bool x=isPlaindrome(s,0,s.size()-1);
    if(x==1) cout<<"Palindrome!"<<endl;
    else cout<<"Not Palindrome!"<<endl;
    return 0;
}
