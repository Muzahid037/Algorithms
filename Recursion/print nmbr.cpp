
#include<bits/stdc++.h>
using namespace std;


void function(int i, int n) {
    if(i<=n) {
        function(i+1, n);
        printf("%d ", i);
    }
}


int main()
{
    int i,n;
    cin>>i>>n;

    function(i,n);

    return 0;
}
