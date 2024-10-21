#include <bits/stdc++.h>
using namespace std;

void runTestCase(int testCase) {
    int n;
    cin>>n;
    int n_odd = 0;
    for (int i=0; i<n; i++) {
        int num;
        cin>>num;
        n_odd += (num & 1) == 0 ? 0 : 1;
    }
    if (n_odd & 1) {
        cout<<"No\n";
    }
    else {
        cout<<"Yes\n";
    }
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