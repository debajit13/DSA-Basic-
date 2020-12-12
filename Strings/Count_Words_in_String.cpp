// You are given a string s consisting of multiple words. You need to count the total words in the string. Words are separated by a single space.

// Example 1:

// Input:
// s = Geeks

// Output: 
// 1

#include<bits/stdc++.h>
using namespace std;
int countWords(string str);
int main() {
	int t;
	string tc;
    getline(cin, tc);
    t=stoi(tc);
	while(t--)
	{   
	    string s;
	    getline(cin, s);
	    cout << countWords(s) << endl;
	}
	return 0;
	
}

int countWords(string str){
    int count = 1;
    for(auto i: str) {
        if(i == ' ')
            count++;
    }
    return count;
}
