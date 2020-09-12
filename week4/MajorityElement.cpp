#include<bits/stdc++.h> 
using namespace std; 

int main(){
    int n; cin >> n;
    unordered_map<int, int> d;  
    int maxReps = 0; 
    for (int i=0; i<n; ++i){
        int ai; cin >> ai; 
        ++d[ai]; 
        if (d[ai] > maxReps)
            maxReps  = d[ai]; 
    }
    cout << (maxReps > n/2 ? 1 : 0 ) << endl; 
    return 0; 
}