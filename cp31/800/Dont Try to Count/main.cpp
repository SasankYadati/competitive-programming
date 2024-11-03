#include <bits/stdc++.h>
using namespace std;

int checkFrom(string x, string s, int start) {
    int n = x.size(), m = s.size();
    int j = 0;
    int n_loops = 0;
    while (j < m && x[start] == s[j]) {
        start++;
        j++;
        if (start == n && j < m) {
            n_loops++;
            start = start % n;
        }
    }

    if (j < m) {
        return -1;
    }
    return n_loops;
}

void runTestCase(int testCase) {
    int n, m;
    string x, s;
    cin>>n>>m;
    cin>>x>>s;

    for (int i=0; i<n; i++) {
        int n_loops = checkFrom(x, s, i);
        if (n_loops != -1) {
            if (n_loops == 0) {
                cout<<"0\n";
                return;
            }
            else {
                cout<<floor(log2(n_loops))+1<<"\n";
                return;
            }
        }
    }
    cout<<"-1\n";
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