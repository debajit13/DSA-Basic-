#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
     int n1=m-l+1, n2=r-m;
     int left[n1], right[n2];
     for(int i=0; i<n1; i++)
        left[i] = arr[i+l];
    for(int j=0; j<n2; j++)
        right[j] = arr[j+m+1];
    int i=0,j=0,k=l;
    while(i < n1 && j < n2) {
        if(left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }
    while(i < n1) {
        arr[k++] = left[i++];
    }
    
    while(j < n2) {
        arr[k++] = right[j++];
    }
     
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int size)
{
    int i;
    cout << "After sorting: ";
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main()
{
    int n,T,i;
    cout << "Enter the number of testcases: ";
    cin >> T;

    while(T--){
    cout << "Enter the array size: ";
    cin >> n;
    int arr[n+1];
    cout << "Enter array elements: ";
    for(i=0;i<n;i++)
      cin >> arr[i];

    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}


