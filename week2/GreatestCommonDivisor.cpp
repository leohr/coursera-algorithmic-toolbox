#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b; 
    int m1 = min(a,b), m2 = max(a,b); 
    int r = m2%m1; 
    while (r != 0){
        m2 = m1; 
        m1 = r; 
        r = m2%m1; 
    }

    cout << m1 << endl; 
}