// selection sort
#include<iostream>
using namespace std;

void swap(long *a, long *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(long arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int min_ind = i;
        for(int j=i+1; j<n; j++) {
           if(arr[j] < arr[min_ind]) { 
                min_ind = j;
           }
        }
        swap(&arr[min_ind], &arr[i]);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    long arr[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << "After sort: ";
    selection_sort(arr, n);
    for(int i=0; i<n; i++) {
        cout << arr[i] <<  " ";
    }
    cout << endl;
    return 0;
}