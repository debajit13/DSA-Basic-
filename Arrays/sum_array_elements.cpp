// Given an integer array arr of size n, you need to sum the elements of arr.

// Example 1:

// Input:
// n = 3
// arr[] = {3 2 1}
// Output: 6

#include <bits/stdc++.h>
using namespace std;

int sumElement(int arr[],int n)
{
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
	int t;
    cout << "Enter the number of testcases: ";
	cin>>t;
	while(t--)
	{
	    int n;
        cout << "Enter the size of array: ";
	    cin>>n;
	    int arr[n];
        cout << "Enter the array elements: ";
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    cout<< "Sum of array elements: " << sumElement(arr,n)<<endl;    
	}
	return 0;
}  