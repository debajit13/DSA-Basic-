// You are given a string s. You need to convert the case of uppercase letters to lowercase letters.

// Example 1:

// Input:
// GeekS

// Output: 
// geeks

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
        if(i >= 65 && i <= 90) {
            i = (i - 65) + 97;
        }
        str1 = str1 + i;
    }
    
    return str1;
}
