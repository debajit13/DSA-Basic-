// program to rotate an array
#include<iostream>
using namespace std;

int gcd(int a, int b) {
	if(b == 0)
		return a;
	return gcd(b, a%b);
}

int rotate(int arr[], int n, int d) {
	d = d%n;
	int GCD = gcd(n,d);
	for(int i=0; i<GCD; i++) {
		int temp = arr[i];
		int j = i;
		while(1) {
			int k = j+d;
			if(k >= n)
				k = k - n;
			if(k == i)
				break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
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
