// program to left rotate an array by one
#include<iostream>
using namespace std;

// function to left rotate an array by one. Time complexity of this function is O(n)
void leftRotateByOne(int arr[], int n) {
	int temp = arr[0];
	for(int i = 1; i < n; i++) {
		arr[i-1] = arr[i];
	}
	arr[n-1] = temp;
}

int main() {
	
	int n;
	
	cout << "Enter the size of array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the array elemennts: ";
	for(int i = 0; i < n; i++) 
		cin >> arr[i];
	
	leftRotateByOne(arr,n);
	
	for(int i = 0; i < n; i++) 
		cout << arr[i] << " ";
	
	return 0;
}
