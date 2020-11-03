// program to find the factorial of a number
#include<iostream>
using namespace std;

int factorial(int n) {
	if(n == 0)	// base case
		return 1;
	return n*factorial(n-1);
}

int main() {
	int n, fact;
	
	cout << "Enter a number: ";
	cin >> n;
	
	fact = factorial(n);
	cout << "Factorial of a number: "  << fact;
	
	return 0;
}
