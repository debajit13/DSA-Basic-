// Given an array arr[] of size N containing positive integers and an integer X. You need to find the value in the array which is greater than X and closest to it. ( if no such value exists the answer should be -1)

// Example 1:

// Input:
// N = 5
// arr[] = {4 67 13 12 15}
// X = 16
// Output: 67

#include<bits/stdc++.h>
using namespace std;

int immediateGreater(int arr[], int n, int x){
    int result = -1;
    int diff, min_diff = INT_MAX;
    for(int i=0; i<n; i++) {
        diff = arr[i] - x;
        if(diff > 0) {
            if(diff < min_diff) {
                min_diff = diff;
                result = arr[i];
            }
        }
    }
    return result;
}

int main() {
	int t;
    cout << "Enter the number of testcases: ";
	cin>>t;
	while(t--)
	{
    	int n;
        cout << "Enter the size of array: ";
    	cin >> n;
    	int arr[n];
        cout << "Enter array elements: ";
    	for(int i = 0;i<n;i++){
    	    cin >> arr[i];
    	}
    	int x;
        cout << "Enter a number: ";
    	cin >> x;	
    	cout << "Immediate greater than " << x << " is: " <<immediateGreater(arr, n, x) << endl;
	}	
	return 0;
} 