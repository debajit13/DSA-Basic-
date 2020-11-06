// program to implement binary search usint iterative way
#include<iostream>
using namespace std;

// TIme complexity: O(log n), Auxiliary Space: O(1)
int bsearch(int arr[], int n, int x) {
	int low = 0;
	int high = n - 1;
	while(low <= high) {
		int mid = (high + low) / 2;
		if(arr[mid] == x)
			return mid;
		else if(arr[mid] > x)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

int main() {
	int n,x,result;
	cout << "Enter the length of array: ";
	cin >> n;
	int arr[n];
	cout << "Enter the array elements: ";
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	cout << "Enter the element to seach: ";
	cin >> x;
	result = bsearch(arr,n,x);
	if(result == -1)
		cout << "Element is not present in the array";
	else
		cout << "Element is present at index " << result << " of the array";
	return 0;
} 
