#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n; cin >> n; 
    long long max1=0, max2=0;
    for (int i=0; i<n; ++i){
        long long x; cin >> x; 
        if (max1 <= x && max2 <= x){
            max2 = max1;
            max1 = x; 
        }
        if (max1 > x && max2 <= x){
            max2 = x; 
        }
    } 
    long long ans = max1*max2; 
    cout << ans << endl; 
    return 0; 
}