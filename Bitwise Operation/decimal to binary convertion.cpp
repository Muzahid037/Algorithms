#include <bits/stdc++.h>
using namespace std;


void  decToBinary(int n)
{
    int binaryNum[32];

    int i = 0;
    while (n > 0) {


        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];

    cout<<'\n';
}

int decToBinaryBitwise(int n)
{
    ///32 bit int
    for (int i = 31; i >= 0; i--) {
        int k = n>>i;                           /// right shift : "k=n/(pow(2,i));"
        if (k&1==1)           ///and operation
            cout << "1";
        else
            cout << "0";
    }
}


int main()
{
    int n;
    cin>>n;
    decToBinary(n);
    decToBinaryBitwise(n);



 return 0;
}
