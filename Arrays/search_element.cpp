// program to search an element in an unsorted array
#include<iostream>
using namespace std;

// function to search element in an array. Time complexity of this function is O(n)
int search(int arr[], int n, int x) {
	for(int i=0; i < n; i++) {
		if(arr[i] == x)
			return i;
	}
	return -1;
}

int main() {
	int n,x,result = 0;
	
	cout << "Enter the size of array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the array elemennts: ";
	for(int i = 0; i < n; i++) 
		cin >> arr[i];
	
	cout << "Enter the element you want to search: ";
	cin >> x;
	
	result = search(arr,n,x);
	
	if(result == -1) 
		cout << "Element is not present in the array";
	else 
		cout << "Element is present at index " << result << " of the array";
	
	return 0;
}
