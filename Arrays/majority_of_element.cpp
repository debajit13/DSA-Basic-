// Given an array arr[] of size N and two elements x and y, use counter variables to find which element appears most in the array, x or y. If both elements have the same frequency, then return the smaller element.
// Note:  We need to return the element, not its count.

// Example 1:

// Input:
// N = 11
// arr[] = {1,1,2,2,3,3,4,4,4,4,5}
// x = 4, y = 5
// Output: 4
// Explanation: 
// frequency of 4 is 4.
// frequency of 5 is 1.

#include <bits/stdc++.h>
using namespace std;

int majorityWins(int arr[], int n, int x,int y);

int majorityWins(int arr[], int n, int x,int y)
{
    int count_x = 0, count_y = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == x)
            count_x++;
        if(arr[i] == y)
            count_y++;
    }
    if(count_x > count_y) {
        return x;
    } else if(count_x < count_y) {
        return y;
    } else {
        if(x > y) {
            return y;
        } else {
            return x;
        }
    }
}

int main() {
    int t; 
    cout << "Enter the number of test cases: ";
    cin>>t; 
    while(t--) 
    {
        int n; 
        cout << "Enter the size of array: ";
        cin>>n; 
        int arr[n]; 
        cout << "Enter array elements: ";
        for(int i=0;i<n;i++) 
            cin>>arr[i];
        int x,y; 
        cout << "Enter two elements of the array: ";
        cin>>x>>y; 
        cout << majorityWins(arr,n,x,y) << " appears most in the array" << endl;
        
    }  
	return 0;
} 