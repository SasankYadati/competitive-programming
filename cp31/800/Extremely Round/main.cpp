#include <bits/stdc++.h>
using namespace std;

int numRound(int n) {
    int ans = 0;
    while (n >= 10) {
        ans += 9;
        n /= 10;
    }
    ans += n;
    return ans;
}

void runTestCase(int testCase) {
    int n;
    cin>>n;
    cout<<numRound(n)<<"\n";
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