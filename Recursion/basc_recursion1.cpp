// program to implement basic recursion
#include<iostream>
using namespace std;

void fun(int n) {
	if(n == 0)	// base case
		return;
	cout << n << endl;
	fun(n - 1);
	cout << n << endl;
}

int main() {
	int n = 3;
	fun(3);
	return 0;
}
