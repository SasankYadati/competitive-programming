#include <bits/stdc++.h>
using namespace std;

bool sorted(vector<int> a) {
    for (int i=0; i<a.size()-1; i++) {
        if (a[i] > a[i+1]) {
            return false;
        }
    }
    return true;
}

void runTestCase(int testCase) {
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    if (k >= 2 || (sorted(a))) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
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