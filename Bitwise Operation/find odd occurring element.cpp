#include<bits/stdc++.h>
using namespace std;

int findOdd(int arr[], int n) {
   int res = 0, i;
   for (i = 0; i < n; i++)
     res =res^arr[i];
   return res;
}

int main(void) {
   int arr[] = {12, 12, 14, 90, 14, 14, 14};
   int n = size(arr);
   printf ("The odd occurring element is %d ", findOdd(arr, n));
   return 0;
}
