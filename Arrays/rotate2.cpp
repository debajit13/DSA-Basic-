// program to rotate an array
#include<iostream>
using namespace std;


int rotate(int arr[], int n, int x) {
	while(x != 0) {
		int temp = arr[0];
		for(int i=0; i<n; i++)
			arr[i] = arr[i+1];
		arr[n-1] = temp;
		x--;
	}
}

int main() {
	int n;
	cout << "Enter the size: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter array elements: ";
	for(int i=0; i<n; i++)
		cin >> arr[i];
	
	int x;
	cout << "Enter the rotation: ";
	cin >> x;
	
	rotate(arr,n,x);
	
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	
	return 0;
}
