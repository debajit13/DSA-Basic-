#include <bits/stdc++.h> 
using namespace std; 

int main(){
    
    unordered_set <int> s;  // declaration of unordered set, it doesn't have any order
    s.insert(10);   // insert function insert element to the unordered set
    s.insert(5);
    s.insert(15);
    s.insert(20);
    for(int x: s)
        cout<<x<<" ";
        
    cout<<endl;
    for(auto it=s.begin();it!=s.end();it++) // begin and end function returns an iterator to the first and after the last element
        cout<<*it<<" ";
    cout<<endl;
    cout<<s.size()<<endl;   // size function returns the size of set
    s.clear();      // clear function delets all the element of the set
    cout<<s.size()<<endl;
    
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    cout<<s.size()<<endl;
    
    if(s.find(15)==s.end()) // find function returns the location if the element is found and s.end() if it not found
        cout<<"Not Found";
    else
        cout<<"Found "<<(*s.find(15));
    
    cout<<endl;   
    if(s.count(15)) // count returns 1 if it founds the element and returns 0 if not found
        cout<<"Found";
    else
        cout<<"Not Found";
    cout<<endl;
    
    cout<<s.size()<<endl;
    s.erase(15);    // erase function delete the elements
    cout<<s.size()<<endl;
    auto it=s.find(10);
    s.erase(it);    // erase also takes iterator as parameter and deletes the element
    cout<<s.size()<<endl;
    
    s.erase(s.begin(),s.end()); // erase also takes the starting and one before the second parameter and delete group of elements 
        
    return 0;
}