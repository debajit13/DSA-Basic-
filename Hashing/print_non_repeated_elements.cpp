// Input:
// n = 10
// arr[] = {1,1,2,2,3,3,4,5,6,7}
// Output: 4 5 6 7


#include <bits/stdc++.h>
using namespace std;

vector<int> printNonRepeated(int arr[],int n);


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    vector<int> v;
	    v = printNonRepeated(arr,n);
	    
	    for(int i=0;i<v.size();i++)  
	        cout<<v[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}

vector<int> printNonRepeated(int arr[],int n)
{
    map<int, int> h;
    vector<int> v;
    for(int i=0; i<n; i++) {
        h[arr[i]]++;
    }
    for(int i=0; i<n; i++) {
        if(h[arr[i]] == 1)
            v.push_back(arr[i]);
    }
    
    return v;
        
    
}