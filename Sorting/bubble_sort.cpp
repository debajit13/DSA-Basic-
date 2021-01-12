// bubble sort
#include<iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        bool swapped = false;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    bubble_sort(arr, n);
    cout << "After sort: ";
    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}