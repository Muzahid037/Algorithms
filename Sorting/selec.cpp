#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selection(int arr[], int n)
{
    int i, j, mi;
    for (i = 0; i < n-1; i++)
    {
        mi = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[mi])
            mi = j;

        swap(&arr[mi], &arr[i]);
    }
}
void bubble(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                        swap(&arr[j], &arr[i]);
            }
        }
    }
}

void insertion(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}


void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;


    int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {

        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[1000],n,t;
    cout<<"Enter Number Of Array Element: "<<endl;
    cin>>n;
    cout<<"Enter Element Of Array: "<<endl;
    for(int i=0;i<n;i++){cin>>arr[i];}
    cout<<"1.Bubble    Sort"<<endl;
    cout<<"2.Selection Sort"<<endl;
    cout<<"3.Insertion Sort"<<endl;
    cout<<"4.Merge     Sort"<<endl;
    cout<<"5.Quick     Sort"<<endl;
    cout<<"Which Type Of Sort Do You Want"<<endl;
    cin>>t;
    if(t==1){bubble(arr,n);}
   if(t==2){selection(arr, n);}
    if(t==3){insertion(arr,n);}
    if(t==4){mergeSort(arr, 0 ,n-1);}
    if(t==5){quickSort(arr,0,n-1);}
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
