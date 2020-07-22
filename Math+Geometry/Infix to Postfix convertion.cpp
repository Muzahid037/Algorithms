
#include<bits/stdc++.h>
using namespace std;

int operatorPrecedence(char c)
{
    int x;

    if(c=='^')
    {
        x=5;

    }
    else if(c=='*' || c=='/')
    {
        x=4;
    }
    else if(c=='+' || c=='-')
    {
        x=3;
    }
    else
    {
        x=0;
    }
    return x;
}

string make_Infix_to_Postfix(string infix)
{
    string postfix="";
    stack<char>stk;
    char ch;

    for(int i=0; i<infix.size(); i++)
    {
        ch=infix[i];

        if(ch=='(')
        {
          stk.push(ch);
        }
        else if(ch==')')
        {
            while(!stk.empty() && stk.top()!='(')
            {
                postfix=postfix+stk.top();
                stk.pop();
            }

            if(!stk.empty() && stk.top()=='(')
            {
                stk.pop();
            }
        }
        else
        {
            int priority=operatorPrecedence(ch);

            if(priority==0)
            {
                postfix=postfix+ch;
            }

            else
            {
                if(stk.empty())
                {
                    stk.push(ch);
                }

                else
                {
                    while(!stk.empty() && stk.top()!='(' && priority<operatorPrecedence(stk.top()))
                    {
                        postfix=postfix+stk.top();
                        stk.pop();
                    }
                    stk.push(ch);
                }
            }

        }
    }

    while(!stk.empty())
    {
        postfix=postfix+stk.top();
        stk.pop();
    }

    return postfix;
}

int calculate(int a,int b,char ch)
{
    if(ch=='^')
    {
        return pow(a,b);
    }
    if(ch=='*')
    {
        return a*b;
    }
    else if(ch=='/')
    {
        return a/b;
    }
    else if(ch=='+')
    {
        return a+b;
    }
    else if(ch=='-')
    {
        return a/b;
    }
}

double calculate_postfix(string postfix)
{
    stack<int> stk;
    char ch;

    for(int i=0;i<postfix.size();i++)
    {
        ch=postfix[i];

        if(ch>='0' && ch<='9')
        {
            stk.push(ch-'0');
        }

        else
        {
            int a,b;

            b=stk.top();                   ///(1+(2^3)*4)/3
            stk.pop();

            a=stk.top();
            stk.pop();

            //cout<<calculate(a,b,ch)<<endl;

            stk.push(calculate(a,b,ch));

        }
    }
    return stk.top();

}

int main()
{
    string infix;
    getline(cin,infix);

    string postfix=make_Infix_to_Postfix(infix);

    cout<<postfix<<endl;

    cout<<calculate_postfix(postfix)<<endl;
}

///https://hellohasan.com/2016/12/12/stack-infix-to-postfix-conversion-evaluation/
