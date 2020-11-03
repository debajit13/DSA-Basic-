// program to find find the n-th fibonacci number
#include<iostream>
using namespace std;

int fibonacci(int n) {
	if(n == 0 || n == 1)	// base case
		return 1;
	return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
	int n, fibo;
	
	cout << "Enter a number: ";
	cin >> n;
	
	fibo = fibonacci(n);
	
	cout << n << "-th fibonacci number is: " << fibo << endl;
	
	return 0;
}
