// program to implement linear search
#include<iostream>
using namespace std;

// lsearch function to search element x. Time complexity of this function is O(n)
int lsearch(int arr[], int n, int x) {
	for(int i = 0; i < n; i++) {
		if(arr[i] == x)
			return i;
	}
	return -1;
}

int main() {
	int n,x,result;
	cout << "Enter the length of the array: ";
	cin >> n;
	int arr[n];
	cout << "Enter array elements: " ;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	cout << "Enter the element to search: ";
	cin >> x;
	result = lsearch(arr,n,x);	// use lsearch to find the result
	if(result == -1)
		cout << "Element is not present in the array";
	else
		cout << "Element is present at index " << result << " of the array";
	return 0;
}
