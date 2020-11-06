// program to implement binary search using recursion
#include<iostream>
using namespace std;

// Time complexity: O(log n), Auxiliary space: O(log n)
int bsearch(int arr[], int x, int low, int high) {
	int mid = (low + high)/2;
	if(low > high)
		return -1;
	if(arr[mid] == x)
		return mid;
	else if(arr[mid] > x)
		return bsearch(arr,x,low,mid-1);
	else if(arr[mid] < x)
		return bsearch(arr,x,mid+1,high);
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
	result = bsearch(arr,x,0,n-1);
	if(result == -1)
		cout << "Element is not present in the array";
	else
		cout << "Element is present at index " << result << " of the array";
	return 0;
}
