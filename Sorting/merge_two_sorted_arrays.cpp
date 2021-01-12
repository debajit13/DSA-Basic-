// merge two sorted arrays
#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int n1, int arr2[], int n2) {
    int i=0;
    int j=0;
    while(i < n1 && j < n2) {

        if(arr1[i] <= arr2[j]) {
            cout << arr1[i] << " ";
            i++;
        }
        else {
            cout << arr2[j] << " ";
            j++;
        }
    }
    while(i < n1) {
        cout << arr1[i] << " ";
        i++;
    }

    while(j < n2) {
        cout << arr2[j] << " ";
        j++;
    }
}

int main() {
    int n1,n2;
    cout << "Enter the size of the 1st array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter array elements: ";
    for(int i=0; i<n1; i++)
        cin >> arr1[i];
    cout << "Enter the size of the 2nd array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter array elements: ";
    for(int i=0; i<n2; i++)
        cin >> arr2[i];
    merge(arr1, n1, arr2, n2);
    return 0;
}