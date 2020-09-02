#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int m1 = min(a,b), m2 = max(a,b); 
    int r = m2%m1; 
    while (r != 0){
        m2 = m1; 
        m1 = r; 
        r = m2%m1; 
    }
    return (m1); 
}

int main(){
    long long a, b; cin >> a >> b; 
    long long d = gcd(a,b); 
    long long ans = a*b/d; 
    cout << ans << endl; 
    return 0; 
}