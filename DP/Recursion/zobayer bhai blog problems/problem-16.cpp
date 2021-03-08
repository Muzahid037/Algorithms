/*
Read a string from keyboard and print it in reversed order.
You must not use any array to store the characters.
Write a recursive solutions to solve this problem.
*/

#include<bits/stdc++.h>
using namespace std;

void inputChar()
{
    char ch;
    scanf("%c", &ch);
    if(ch!='\n') inputChar();
    cout<<ch;
}
int main()
{
    inputChar();
    cout<<endl;
    return 0;
}

///Another solution
/*
#include<bits/stdc++.h>
using namespace std;

string getReverseString(string s,int i,string sRev)
{
    if(i<0) return sRev;
    sRev+=s[i];
    return getReverseString(s,i-1,sRev);
}
int main()
{
    string s;
    cin>>s;
    string sRev=getReverseString(s,s.size()-1,"");
    cout<<sRev<<endl;
    return 0;
}
*/
