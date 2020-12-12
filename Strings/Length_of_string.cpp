// You are given a string s. You need to find the length of the string.

// Example 1:

// Input:
// s = Geeks
// Output: 
// 5


#include<bits/stdc++.h>
using namespace std;

int lengthString(string str);


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	string s;
	cin >> s;
	cout << lengthString(s) << endl;
	}
	
	return 0;
	
}


int lengthString(string str)
{
    return str.length();
    
}