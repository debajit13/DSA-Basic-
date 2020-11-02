// basic program to implement recursion
#include<iostream>
using namespace std;

void greeting(int n) {
	if(n == 0)	// base case
		return;
	cout << "Hello" << endl;
	greeting(n-1);	
}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	greeting(n);
	return 0;
}
