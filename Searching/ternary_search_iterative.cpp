// program to implement ternary search in iterative way
#include<iostream>
using namespace std;

// function to find the element using ternary search. Time complexity of this function is O(log n)
int ternarySearch(int arr[], int x, int l, int r) {
	while(l <= r) {
		int mid1 = l + (r-l)/3;
		int mid2 = r - (r-l)/3;

		if(arr[mid1] == x)
			return mid1;
		else if(arr[mid2] == x)
			return mid2;
		else if(arr[mid1] > x)
			r = mid1-1;
		else if(arr[mid2] < x)
			l = mid2+1;
		else {
			l = mid1+1;
			r = mid2-1;
		}
	}
	return -1;
}

int main() {
	int n,x,result;
	cout << "Enter the number of elements: ";
	cin >> n;
	int arr[n];
	cout << "Enter the array elements: ";
	for(int i=0; i<n; i++) 
		cin >> arr[i];
	cout << "Enter the element you want to search: ";
	cin >> x;
	result = ternarySearch(arr,x,0,n-1);
	if(result == -1)
		cout << "Element is not present in tha array";
	else
		cout << "Element is present at index " << result << " in the array";
	return 0;
}
