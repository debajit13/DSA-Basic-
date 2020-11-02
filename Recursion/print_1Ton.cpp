// program to print 1 to N using recursion
// Time complexity O(n), Space Complexity O(n)
#include<iostream>
using namespace std;

void printNumber(int n) {
	if(n == 0)	//base case
		return;
	printNumber(n-1);
	cout << n << " ";
}

int main() {
	int n;
	
	cout << "Enter a number: ";
	cin >> n;
	
	printNumber(n);
	
	return 0;
}
