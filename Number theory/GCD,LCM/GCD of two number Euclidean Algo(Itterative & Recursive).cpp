///***Euclidean algorithm***///

///Iterative
#include<bits/stdc++.h>
using namespace std;
int gcd( int a, int b )
{
    while ( b )
    {
        a = a % b;
        swap ( a, b );
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(a<b)
    {
        swap(a,b);
    }
    cout<<gcd(a,b)<<endl;

    return 0;
}


/*
    ///Recursive

    #include<bits/stdc++.h>
    using namespace std;

    int gCD(int a,int b)
    {
        if(a%b==0){return b;
        }
        else
            return gCD(b,a%b);
    }

    int main()
    {
        int a,b;
        cin>>a>>b;
        if(a<b)
        {
            swap(a,b);
        }
        cout<<gCD(a,b)<<endl;;

        return 0;
    }
    */
