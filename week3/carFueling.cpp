#include<bits/stdc++.h>
using namespace std;

int main(){
    int d, m, n; cin >> d >> m >> n; 
    vector<int> stops(n+1); stops[n] = d; 
    bool ok = true;  
    for (int i=0; i<=n; ++i){
        cin >> stops[i];
        if (i == 0 && stops[i] > m)
            ok = false; 
        if (i > 0 && stops[i] - stops[i-1] > m)
              ok = false; 
    }  

    if (!ok){
        cout << -1 ; 
    } else {
        int ans = 0, currentPos = 0, i = 0;  
        while (d - currentPos > m){
            if (stops[i] - currentPos <= m){
                ++i; 
            } else {
                ++ans; 
                currentPos = stops[i-1]; 
            }
        }

        cout << ans ; 
    }


    return 0; 
}