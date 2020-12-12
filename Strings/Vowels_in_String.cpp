// You are given a string s. You need to count the total vowels in the string. The string s contains lowercase letters only.

// Example 1:

// Input:
// s = geeks
// Output: 
// 2

#include<bits/stdc++.h>
using namespace std;

int countVowels(string str);


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << countVowels(s) << endl;
	}
	return 0;
	
}

int countVowels(string str){
  
  //Your code here
    int count = 0;
    for(auto i: str) {
        if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
            count++;
    }
    return count;
        
    
}
