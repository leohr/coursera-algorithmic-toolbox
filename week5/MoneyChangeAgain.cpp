#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int n; cin >> n;
    vector<int> sols(n+1);  
    for (int x=1; x<n+1; ++x){
        if (x == 1)
            sols[x] = 1; 
        else if (x == 2) 
            sols[x] = 2;
        else if (x == 3)
            sols[x] = 1; 
        else if (x == 4)
            sols[x] = 1; 
        else 
            sols[x] = 1 + min(sols[x-1], min(sols[x-3], sols[x-4]));  
    }
    cout << sols[n] << endl; 
    return 0; 
}