#include<bits/stdc++.h>
using namespace std;
int a[500000];
int ct=0;

void Merge(int *a,int *L,int leftCount,int *R,int rightCount) {
	int i=0,j=0,k=0;

	while(i<leftCount && j< rightCount) {

		if(L[i]  < R[j]) {a[k++] = L[i++];}
		else a[k++] = R[j++];
		ct++;
	}
	while(i < leftCount){ a[k++] = L[i++]; ct++;}
	while(j < rightCount) {a[k++] = R[j++]; ct++;}
}

void MergeSort(int *a,int n) {
	int mid,i, *L,*R;
	if(n < 2) return;
	L = (int*)malloc(mid*sizeof(int));
    R = (int*)malloc((n- mid)*sizeof(int));

	mid = n/2;

	for(i = 0;i<mid;i++) L[i] = a[i];
	for(i = mid;i<n;i++) R[i-mid] = a[i];

	MergeSort(L,mid);
	MergeSort(R,n-mid);
	Merge(a,L,mid,R,n-mid);

}

int main() {


	int n;
	cin>>n;
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
	MergeSort(a,n);
	for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl;
    cout<<ct<<endl;
	return 0;
}
