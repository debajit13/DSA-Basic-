// Check a given string is palindrome or not using recursion
#include<iostream>
using namespace std;

// Time complexity and space complexity is O(n)
bool checkPalindrome(string &str, int findex, int lindex) {
	if(findex >= lindex)
		return true;
	return (str[findex] == str[lindex]) && checkPalindrome(str, findex+1,lindex-1);
}

int main() {
	string str;
	int result;
	
	cout << "Enter a string: ";
	cin >> str;
	
	int l = str.length()-1;
	int s = 0;
	result = checkPalindrome(str,s,l);
	
	if(result == 1)
		cout << "String is palindrome";
	else 
		cout << "String is not palindrome";

	return 0;
}
