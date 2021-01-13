// partition an arrays lower items to the left and higher items to the right of the array
#include<iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void partiton(int arr[], int l, int h, int x) {
    swap(&arr[x], &arr[h]);
    int pivot = arr[h];
    int i = l-1;
    for(int j=0; j<=h-1; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
}

int main() {
    int n,x;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << "Enter the partition elements index: ";
    cin >> x;
    cout << "After Lomuto Partition: ";
    partiton(arr,0, n-1, x);
    for(int i=0; i<n; i++) {
        cout << arr[i] <<  " ";
    }
    cout << endl;
    return 0;
}