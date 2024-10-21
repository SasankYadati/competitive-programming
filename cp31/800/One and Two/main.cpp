#include <bits/stdc++.h>
using namespace std;


void runTestCase(int testCase) {
    int n;
    cin>>n;
    vector<int> a(n);
    int n_twos = 0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        if (a[i] == 2) {
            n_twos++;
        }
    }
    if (n_twos & 1) {
        cout<<-1<<"\n";
    }
    else {
        int temp_cnt = 0;
        int i;
        for (i=0; i<n; i++) {
            if (a[i] == 2) {
                temp_cnt++;
            }
            if (temp_cnt == n_twos/2) {
                break;
            }
        }
        
        cout<<i+1<<"\n";
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