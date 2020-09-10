#include<bits/stdc++.h>
using namespace std;

int binarySearch(int x, vector<int> a){
    int n = a.size(); 
    int l = 0, r = n-1, m = (l+r)/2; 

    while (r-l>1){
        if (a[m] >= x){
            r = m; 
        } else {
            l = m; 
        }
        m = (l+r)/2; 
    }

    if (a[m] == x){
        return m; 
    } else if (a[m+1] == x){
        return m+1; 
    } else {
        return -1; 
    }
}

int main(){
    int n; cin >> n; 
    vector<int> a(n); 
    for (int i=0; i<n; ++i) cin >> a[i]; 

    int k; cin >> k;  
    for (int i=0; i<k; ++i){
        int x; cin >> x; 
        cout << binarySearch(x, a) << " "; 
    } 


    
}