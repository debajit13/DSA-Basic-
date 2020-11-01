#include<iostream>
using namespace std;

// function to check the array is sorted or not. Time complexity of this function is O(n)
bool isSorted(int arr[], int n) {
	for(int i = 1; i < n; i++) {
		if(arr[i] < arr[i-1])
			return false;
	}
	return true;
}

int main() {
	int n;
	bool result;
	
	cout << "Enter the size of array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the array elemennts: ";
	for(int i = 0; i < n; i++) 
		cin >> arr[i];
		
	result = isSorted(arr, n);
	
	(result) ? cout << "Array is sorted" : cout << "Array is not sorted";
	
	return 0;
}
