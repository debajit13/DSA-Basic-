// print n to 1 using recursion
// Time complexity O(n), Space Complexity O(n)
#include<iostream>
using namespace std;

void printNum(int n) {
	if(n == 0)	//base case
		return;
	cout << n << " ";
	printNum(n-1);
}

int main() {
	int n;
	
	cout << "Enter the value of n: ";
	cin >> n;
	
	printNum(n);
	
	return 0;
}
