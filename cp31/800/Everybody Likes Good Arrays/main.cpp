#include <bits/stdc++.h>
using namespace std;

int minOpsForGoodArray(vector<int> a, int i) {
    int min_ops = 0;
    for (int i=0; i<a.size()-1; i++) {
        if ((a[i] & 1) == (a[i+1] & 1)) {
            min_ops++;
        }
    }
    return min_ops;
}

void runTestCase(int testCase) {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    
    cout<<minOpsForGoodArray(a, 0)<<"\n";
    
}

int main() {
    // solution comes here
    int t;
    cin>>t;
    for (int i=0; i<t; i++) {
        runTestCase(i);
    }
    return 0;
}