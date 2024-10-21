#include <bits/stdc++.h>
using namespace std;

void runTestCase(int testCase) {
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    long long sum=0;
    int M=0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        sum += (long long)a[i];
        M = max(M, a[i]);
    }
    cout<<max(sum/x + (sum%x > 0 ? 1 : 0), (long long)M)<<"\n";
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