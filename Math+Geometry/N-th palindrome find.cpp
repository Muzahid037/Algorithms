#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num, rev, dig, nth, count = 0, m;
        printf("Enter a number to find nth palindrome: ");
        scanf("%d", &nth);
        m = 1;
        while(1)
        {
            num = m;
            n = num;

            rev = 0;
            while (num > 0)
            {
                dig = num % 10;
                rev = rev * 10 + dig;
                num = num / 10;
            }
            if(n ==  rev)
            {
                count = count + 1;
                if (count == nth)
                    {
                        printf("%d is %d th palindrome number\n", n, nth );
                        break;
                    }
            }
            m = m + 1;

        }
    }


    return 0;

}
