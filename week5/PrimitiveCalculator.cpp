#include <bits/stdc++.h> 
using namespace std; 

void dp(int x, vector<vector<int>> &s) {
    if (s[x][0] > 0) 
        return; 

    int value = s[x-1][0]; 
    int pred = x-1; 

    if (x%2 == 0 && s[x/2][0] < value) {
        value = s[x/2][0]; 
        pred = x/2; 
    } 
    if (x%3 == 0 && s[x/3][0] < value) {
        value = s[x/3][0]; 
        pred = x/3; 
    } 

    s[x][0] = value + 1; 
    s[x][1] = pred; 

}

int main() {
    int n; cin >> n; 
    vector<vector<int>> s(n+1); // The first component wil hold the value, the second the predecesor
    // Initialize 
    s[1].resize(2, 0); 
    s[1][0] = 0;  s[1][1] = 0;
    // Fill the vector of solutions (DP) 
    for (int i = 2; i <= n; ++i) {
        s[i].resize(2, 0); 
        dp(i, s); 
    }
    // Return output 
    cout << s[n][0] << endl; 
    int act = n; 
    vector<int> out; 
    while (act != 0) { 
        out.push_back(act); 
        act = s[act][1]; 
    }
    for (int i = out.size()-1; i >= 0; --i) {
        cout << out[i] << " "; 
    }
    return 0; 
}