// program to implement delete operation in an array
#include<iostream>
using namespace std;

//function to delete element from an array. Time complexity of this function is O(n)
int deleteEle(int arr[], int n, int x) {
	
	int i;
	for(i = 0; i < n; i++) {
		if(arr[i] == x)
			break;
	}
	
	if(i == n) 
		return n;
		
	for(int j = i; j < n-1; j++) {
		arr[j] = arr[j+1];
	}
	
	return n-1;
}

int main() {
	int n,x,result = 0;
	
	cout << "Enter the size of array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the array elemennts: ";
	for(int i = 0; i < n; i++) 
		cin >> arr[i];
		
	cout << "Enter the element you want to delete: ";
	cin >> x;
	
	result = deleteEle(arr, n, x);
	
	if(result == n) 
		cout << "Array is not present in the array";
	
	else {
		cout << "Element successfully deleted. The new array is: " << endl;
		for(int i=0; i < result; i++) 
			cout << arr[i] << " ";
	}
	
	return 0;
}
