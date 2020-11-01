// remove duplicates from an array
#include<iostream>
using namespace std;

// function to remove duplicate elements from an array. Time complexity of this function is O(n)
int removeDuplicate(int arr[], int n) {
	int res = 1;
	for(int i = 1; i < n; i++) {
		if(arr[i] != arr[res-1]) {
			arr[res] = arr[i];
			res++;
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
	
	result = removeDuplicate(arr, n);
	
	cout << "After deleting duplicate elements new array: ";
	for(int i = 0; i < result; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}
