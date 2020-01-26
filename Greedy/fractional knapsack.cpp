#include<bits/stdc++.h>
using namespace std;

struct data
{
    int profit,weight;
};
bool cmp(struct data a,struct data b)
{
    double aval=(double)(a.profit/a.weight);
    double bval=(double)(b.profit/b.weight);
    return aval>bval;
}
double frac_knap(int cap,data obj[],int n)
{
    sort(obj,obj+n,cmp);
    double maxProfit=0.0;
    int currWeight=0;
    for(int i=0;i<n;i++)
    {
        if(currWeight+obj[i].weight<=cap)
        {
            currWeight+=obj[i].weight;
            maxProfit+=obj[i].profit;
        }
      else if(currWeight==cap){break;}
        else
        {
            int rem=cap-currWeight;

            double x=((double)rem/obj[i].weight);
            currWeight+=x;
            maxProfit+=obj[i].profit*x;
            break;
        }
    }
    return maxProfit;
}
int main()
{
    int n;
    cin>>n;
    struct data obj[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>obj[i].profit>>obj[i].weight;
    }
    int cap;
    cin>>cap;
    cout<<frac_knap(cap,obj,n)<<endl;

    return 0;
}
