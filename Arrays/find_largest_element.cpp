// find the largest element in an array
#include<iostream>
using namespace std;

// function to get the largest element of an array. Time complexity of this function is O(n)
int getLargest(int arr[], int n) {
	int max = 0;
	for(int i = 1; i < n; i++) {
		if(arr[i] > arr[max]) 
			arr[max] = arr[i];
	}
	return arr[max];
}

int main() {
	
	int n,max = 0;
	
	cout << "Enter the size of array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the array elemennts: ";
	for(int i = 0; i < n; i++) 
		cin >> arr[i];
		
	max = getLargest(arr, n);
	
	cout << "Largest element of the array is: " << max;
	
	return 0;
}
