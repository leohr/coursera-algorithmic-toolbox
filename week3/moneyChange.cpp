#include<bits/stdc++.h>
using namespace std; 

int main(){
    int m; cin >> m;  
    int c10 = m/10, c5 = (m%10)/5, c1 = (m%10)%5; 
    cout << c1 + c5 + c10 << endl;     
}