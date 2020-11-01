// program to insert element in an array
#include<iostream>
using namespace std;

//function to insert elements in any position of an array. Time complexity of this function is O(n)
int insert(int arr[], int n, int pos, int cap, int x) {
	if(n == cap)
		return n;
	int idx = pos - 1;
	for(int i = n-1; i >= idx; i--) {
		arr[i+1] = arr[i];
	}
	arr[idx] = x;
	return n+1;
}

int main() {
	int x,result = 0,cap = 6, n = 5, pos;	//n = filled spaces, cap = size of array, result = array size
	int arr[5] = {1,2,3,4,5};

	cout << "Enter the element and position you want to insert: ";
	cin >> x >> pos;
	
	
	result = insert(arr,n,pos,cap,x);
	
	if(result == n) 
		cout << "Your array is already full";
	else {
		cout << "Element is successfully inserted at pos " << pos << " of the array\n";
	
		for(int i = 0; i < cap; i++) 
			cout << arr[i] << " ";
	}

	
	return 0;
}
