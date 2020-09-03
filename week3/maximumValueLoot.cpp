#include<bits/stdc++.h>
using namespace std; 

int main(){ 
    int n; cin >> n;
    double W; cin >> W; 
    vector<double> v(n), w(n), vw(n);
    for (int i=0; i<n; ++i){
         cin >> v[i] >> w[i]; 
         vw[i] = v[i]/w[i];  
    }
    set<int> chosenItems; 
    double ans = 0; 

    while (W > 0){
        double maxValue = 0; 
        int maxIndex; 
        for (int i=0; i<n; ++i){
            if (chosenItems.find(i) != chosenItems.end()){
                continue; 
            }
            if (vw[i] >= maxValue){
                maxValue = vw[i]; 
                maxIndex = i; 
            }
        }

        chosenItems.insert(maxIndex);  

        if (W >= w[maxIndex]){
            W -= w[maxIndex]; 
            ans += v[maxIndex]; 
        }  else {
            ans += v[maxIndex]*W/w[maxIndex]; 
            W = 0; 
        }

        if (chosenItems.size() == n) break;
    }
    
    cout.precision(10); 
    cout << ans << endl; 

    return 0; 
}