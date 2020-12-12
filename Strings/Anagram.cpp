// Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “act” and “tac” are an anagram of each other.

// Example 1:

// Input:
// a = geeksforgeeks, b = forgeeksgeeks
// Output: YES
// Explanation: Both the string have same
// characters with same frequency. So, 
// both are anagrams.
// Example 2:

// Input:
// a = allergy, b = allergic
// Output: NO
// Explanation:Characters in both the strings
// are not same, so they are not anagrams.

#include <bits/stdc++.h>
using namespace std;
/*  Function to check if two strings are anagram
*   a, b: input string
*/
bool isAnagram(string a, string b){
    
    // Your code here
    if(a.length() != b.length())
        return false;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    if(a != b)
        return false;
        
    return true;
}

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;

        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}