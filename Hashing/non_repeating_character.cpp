// Input:
// S = hello
// Output: h

#include <bits/stdc++.h>
using namespace std;

char nonrepeatingCharacter(string S);

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    
        char ans = nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

char nonrepeatingCharacter(string S)
{
   map<char, int> h;
   
   for(int i=0; i<S.length(); i++) {
       h[S[i]]++;
   }
   
   for(int i=0; i<S.length(); i++) {
       if(h[S[i]] == 1)
        return S[i];
   }
   return '$';
}
