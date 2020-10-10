#include<bits/stdc++.h> 
using namespace std; 

int main() {
    int W, n; cin >> W >> n; 
    vector<int> w(n); 
    for (int i = 0; i < n; ++i) {
        cin >> w[i]; 
    }

    vector<vector<int>> sol(W+1); 
    for (int i = 0; i <= W; ++i) {
        vector<int> v(n+1);
        sol[i] = v;  
        for (int j = 1; j <= n; ++j) {
            int last_w = w[j-1]; 
            sol[i][j] = sol[i][j-1]; 
            if (last_w <= i) {
                sol[i][j] = max(sol[i - last_w][j-1] + last_w, sol[i][j-1]);
            }
        }
    }
    
    cout << sol[W][n] << endl;

    return 0; 
}