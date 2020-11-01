//program to reverse an array
#include<iostream>
using namespace std;

// funtion to reverse an array. Time complexity of this function is O(n)
void reverse(int arr[], int n) {
	int i = 0, j = n-1, temp = 0;
	while(i < j) {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}

int main() {
	int n;
	
	cout << "Enter the size of array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the array elemennts: ";
	for(int i = 0; i < n; i++) 
		cin >> arr[i];
	
	reverse(arr, n);
	
	for(int i=0; i < n; i++) 
		cout << arr[i] << " ";
		
	return 0;
}


