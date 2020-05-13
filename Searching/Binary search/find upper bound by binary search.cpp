#include<iostream>
using namespace std;


int lowerBound(int *a,int n,int key){
    int s =0,e=n-1,mid;
    int ans = -1;

    while(s<=e){
        mid = (s+e)/2;

        if(a[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(a[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

    return mid;
}

int upperBound(int *a,int n,int key){
    int s =0,e=n-1,mid;
    int ans = -1;

    while(s<=e){
         mid = (s+e)/2;

        if(a[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(a[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

    return mid;
}

int main(){
    int a[] = {2,4,6,6,8};
    int n = sizeof(a)/sizeof(int);
    cout<<lowerBound(a,n,5)<<endl;
    cout<<upperBound(a,n,5)<<endl;
return 0;
}
