// Input:
// 10
// 1 2 3 4 5 6 7 8 9 10 
// 14
// Output: 
// 1

#include <bits/stdc++.h>
using namespace std;

int sumExists(int arr[], int sizeOfArray, int sum);
int sumExists(int arr[], int N, int sum)
{ 
   unordered_set<int> h;
   for(int i=0; i<N; i++) {
       h.insert(arr[i]);
   }
   
   for(auto it=h.begin(); it != h.end(); it++) {
       int num = *it;
       if(h.find(sum-num) != h.end() && h.find(sum-num) != h.find(num))
            return 1;
   }
   
   return 0;

        
}


int main() {
    
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        
        int arr[sizeOfArray];
        
        for(int i=0;i<sizeOfArray;i++)
        cin>>arr[i];
        int sum;
        cin>>sum;
        
        cout<<sumExists(arr,sizeOfArray,sum)<<endl;
        
        
    }
    
    
    
	return 0;
}
