// You are given a string s. You need to find if the string is a panagram or not.
// A panagram contains all the letters of english alphabet at least once.

// Example 1:

// Input:
// s = Thequickbrownfoxjumpsoverthelazydog
// Output: 1
// Example 2:

// Input:
// s = HeavyDuty
// Output: 0

#include<bits/stdc++.h>
using namespace std;
bool isPanagram(string str);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << isPanagram(s) << endl;
	}
	
	return 0;
	
}

bool isPanagram(string str){
int count = 0; 
while(count <= 26) {
    for(auto i: str) {
        if(i != (int('a') + count) || i != (int('A') + count))
            return false;
    }
    count++;
}
return true;
    
}