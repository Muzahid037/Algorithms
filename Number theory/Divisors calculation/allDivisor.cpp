#include <bits/stdc++.h>
using namespace std;
vector<int> divisors[1000002];

void calculateDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            divisors[j].push_back(i);
            // cout<<i<<" is divisor of "<<j<<endl;
        }
    }
}
void showDivisors(int n)
{

    for (int i = 1; i <= n; i++)
    {
        cout << "Divisors of " << i << ":" << endl;
        for (vector<int>::iterator it = divisors[i].begin(); it != divisors[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    calculateDivisors(n);
    showDivisors(n);

    return 0;
}
