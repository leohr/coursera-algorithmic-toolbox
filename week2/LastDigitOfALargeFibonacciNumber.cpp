#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n; cin >> n; 
    int f1=0, f2=1, f; 
    if (n==0) 
        cout << f1 << endl; 
    else if  (n==1)
        cout << f2 << endl; 
    else {
        for (int i=2; i<=n; ++i){
            f = (f1 + f2)%10; 
            f1 = f2; f2 = f;  
        }
        cout << f << endl; 
    }

    return 0; 
}