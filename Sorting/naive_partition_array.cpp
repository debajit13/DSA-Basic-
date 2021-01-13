// partition an arrays lower items to the left and higher items to the right of the array
#include<iostream>
using namespace std;

void partition(int arr[], int l, int h, int p) {
    int temp[h-l+1], index = 0;
    for(int i=l; i<=h; i++) {
        if(arr[i] <= arr[p]) {
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i=l; i<=h; i++) {
        if(arr[i] > arr[p]) {
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i=l; i<=h; i++) {
        arr[i] = temp[i-l];
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
    int p;
    cout << "Enter the index of partition element: ";
    cin >> p;
    cout << "Result array: ";
    int l = 0;
    int h = n-1;
    partition(arr, l, h, p);
    for(int i=0; i<n; i++) {
        cout << arr[i] <<  " ";
    }
    cout << endl;
    return 0;
}