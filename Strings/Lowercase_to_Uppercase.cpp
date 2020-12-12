// You are given a string s. You need to convert the case of lowercase letter to uppercase letters.

// Example 1:

// Input:
// Geeks

// Output: 
// GEEKS


#include<bits/stdc++.h>
using namespace std;

string caseConversion(string str);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	
	string s;
	cin >> s;
	
	cout << caseConversion(s) << endl;
	
	}
	
	return 0;
	
}

string caseConversion(string str){
    string str1 = "";
    for(auto i: str) {
        if(i >= 97 && i <= 122) {
            i = (i - 97) + 65;
        }
        str1 = str1 + i;
    }
    
    return str1;
}
