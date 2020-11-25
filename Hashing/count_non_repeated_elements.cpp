// Input:
// 10
// 1 1 2 2 3 3 4 5 6 7
// Output: 
// 4

#include <bits/stdc++.h>
using namespace std;

int countNonRepeated(int arr[], int n);

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
	    
	    cout<<countNonRepeated(arr,n)<<endl;
	    
	}
	return 0;
}


int countNonRepeated(int arr[], int n)
{
    unordered_map<int,int> h;
    for(int i=0; i<n; i++)
        h[arr[i]]++;
    int count = 0;
    for(auto it=h.begin(); it != h.end(); it++)
        if(it->second == 1)
            count++;
    return count;
}
