#include<bits/stdc++.h> 
using namespace std; 

void printVector(vector<int> v){
    int n = v.size(); 
    for (int i=0; i<n; ++i){
        if (i < n-1)
            cout << v[i] << " " ; 
        else  
            cout << v[i] << endl; 
    }
}

vector<int> partition3(vector<int> &a, int l, int r){
    vector<int> lower, equal, greater; 

    int x = a[l]; 
    for (int i=l; i<=r; ++i){
        if (a[i] < x)
            lower.push_back(a[i]); 
        else  if (a[i] == x)
            equal.push_back(a[i]); 
        else 
            greater.push_back(a[i]); 
    }

    int c1 = lower.size(), c2 = lower.size() + equal.size();  
    for (int i=l; i<=r; ++i){
        if (i < l+c1)
            a[i] = lower[i-l]; 
        else if (i < l+c2)
            a[i] = x; 
        else 
            a[i] = greater[i - (l+c2)]; 
    }
    vector<int> v = {l+c1, l+c2}; 
    return(v); 
}

void quickSort3(vector<int> &a, int l, int r){
    if (r <= l) return; 

    vector<int> v = partition3(a, l, r);

    quickSort3(a, l, v[0]-1); 
    quickSort3(a, v[1], r);  
}

int main(){
    int n; cin >> n; 
    vector<int> a(n); 
    for (int i=0; i<n; ++i) cin >> a[i]; 

    quickSort3(a, 0, n-1); 
    printVector(a); 

    return(0); 
}