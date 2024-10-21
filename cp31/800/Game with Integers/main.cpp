#include <bits/stdc++.h>
using namespace std;


void runTestCase(int testCase) {
    int n;
    cin>>n;
    if (n % 3 == 0) {
        cout << "Second\n";
    } else {
        cout << "First\n";
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