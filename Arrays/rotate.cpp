// program to rotate an array 
#include<iostream>
using namespace std;

// store all the d elements of the array into an temp array 
// left shift all the eliments by d
// fill the last d spaces with temp elements
int rotate(int arr[], int n, int d) {
	int temp[d];
	for(int i=0; i<d; i++) {
		temp[i] = arr[i];
	} 
	for(int i=0; i<n; i++) {
		arr[i] = arr[i+d]; 
	}
	for(int i = 0; i < n; i++) {
		arr[i+d] = temp[i];
	}
}

int main() {
	int n, d;
	cout << "Enter the size of the array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the elements: ";
	for(int i=0; i<n; i++) 
		cin >> arr[i];
	cout << "Enter the element you want to rotate: ";
	cin >> d;
	rotate(arr,n,d);
	
	cout << "The array is:";
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	return 0;
}
