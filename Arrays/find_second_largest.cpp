// program to find the second largest element of an array
#include<iostream>
using namespace std;

// function to find the second largest element of an array. Time complexity of this function is O(n)
int findSecondLargest(int arr[], int n) {
	int res = -1, largest = 0;
	for(int i = 1; i < n; i++) {
		if(arr[i] > arr[largest]) {
			res = largest;
			largest = i;
		}
		else if(arr[i] =! arr[largest]) {
			if(res == -1 || arr[i] > arr[res]) 
				res = i;
		}
	}
	return res;
}

int main() {
	
	int n,result = 0;
	
	cout << "Enter the size of array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the array elemennts: ";
	for(int i = 0; i < n; i++) 
		cin >> arr[i];
	
	result = findSecondLargest(arr, n);
	
	cout << "Second largest element of the array is: " << arr[result] << endl;
	
	return 0;
}
