# include<bits/stdc++.h> 
using namespace std; 

int knapsackCount(int W, vector<int> w) {
    int n = w.size(); 
    int ans = 0; 
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
            if (sol[i][j] == W) 
                ++ans; 
        }
    }
    return ans; 
}

int main() {
    int n; cin >> n; 
    vector<int> v(n); 
    int S = 0; 
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        S += v[i];   
    }
    sort(v.begin(), v.end(), greater <>()); 

    if (n < 3) 
        cout << 0 << endl; 
    else if (S % 3 != 0)
        cout << 0 << endl; 
    else {
        int count = knapsackCount(S/3, v); 
        if (count >= 3) 
            cout << 1 << endl; 
        else 
            cout << 0 << endl; 
    }

    return 0; 
}