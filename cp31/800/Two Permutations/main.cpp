#include <bits/stdc++.h>
using namespace std;


void runTestCase(int testCase) {
    int n, a, b;
    cin>>n>>a>>b;
    string ans;
    if (a + b < n-1) {
        ans = "Yes";
    } 
    else if (a+b == n || a+b == n-1) {
        ans = "No";
    }
    else {
        ans = (a == n && b == n) ? "Yes" : "No";
    }
    cout<<ans<<"\n";
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