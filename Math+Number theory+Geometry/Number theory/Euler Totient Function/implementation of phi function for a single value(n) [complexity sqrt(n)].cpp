#include<bits/stdc++.h>
using namespace std;

int phi(int n)
{
    int result = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            cout<<"n: "<<n<<" i: "<<i<<" result: "<<result<<" result/i: "<<result/i<<endl;
            result = result - (result / i);
        }
    }
    if (n > 1)
        cout<<"n: "<<n<<" result: "<<result<<" result/n: "<<result/n<<endl;
        result = result - (result / n);
    return result;
}

int main()
{
    cout<<"Number to find Euler Totient function: ";
    int n;
    cin>>n;
    cout<<"phi("<<n<<")= "<<phi(n)<<endl;
    return 0;
}
