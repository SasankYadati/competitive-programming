#include <bits/stdc++.h>
using namespace std;


void runTestCase(int testCase) {
    int n, x;
    cin>>n>>x;
    vector<int> a(n+2);
    a[0] = 0; // starting point
    a[n+1] = x; // ending point
    for (int i=1; i<=n; i++) {
        cin>>a[i];
    }
    int ans = 0;
    for (int i=1; i<n+2; i++) {
        if (i == n+1) {
            ans = max(ans, 2 * (a[i] - a[i-1]));
        }
        else {
            ans = max(ans, a[i] - a[i-1]);
        }
    }
    cout<<ans<<endl;
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