// program to find the sum of n natural number using recursion
#include<iostream>
using namespace std;

// Using tail recursion. Output Size: 1.83248805999756 MiB, Compilation time: 0.61s 
int calcSum0(int n,int sum = 0) {	
	if(n == 0)
		return sum;
	return calcSum0(n-1, sum+n);
}

// Using Non-tail recursion. Output Size: 1.83248615264893 MiB, Compilation time: 0.69s
int calcSum1(int n) {
	
	if(n == 0)
		return 0;
		
	return n+calcSum1(n-1);
}


int main() {
	int n,sum;
	
	cout << "Enter a number: ";
	cin >> n;
	
	sum = calcSum0(n);
	
	cout << "Sum of first " << n << " numbers: " << sum << endl;
	
	return 0;
}
