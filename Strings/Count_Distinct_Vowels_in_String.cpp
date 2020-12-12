// You are given a string s. You need to count the total distinct vowels in the string. The string s contains lowercase letters only.

// Example 1:

// Input:
// geeks

// Output: 
// 1

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
    
   int count = 0;
   int arr[5] = {0};    // let's assume a = 0, e = 1, i = 2, o = 3, u= 4 index
   for(auto i : str) {
       if(i == 'a' && arr[0] == 0) {
           arr[0]++;
       }
       else if(i == 'e' && arr[1] == 0) {
           arr[1]++;
       }
       else if(i == 'i' && arr[2] == 0) {
           arr[2]++;
       }
       else if(i == 'o' && arr[3] == 0) {
           arr[3]++;
       }
       else if(i == 'u' && arr[4] == 0) {
           arr[4]++;
       }
   }
   for(auto i: arr) 
        if(i == 1)
            count++;
   return count;
    
}