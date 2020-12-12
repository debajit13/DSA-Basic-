// You are given a string s. You need to reverse the string.

// Example 1:

// Input:
// s = Geeks
// Output: skeeG
// Example 2:

// Input:
// s = for
// Output: rof

#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

string reverseWord(string str){
  string str1 = "";
  for(int i=str.length() - 1; i >= 0; i--)
    str1 = str1 + str[i];

    return str1;
    
}
