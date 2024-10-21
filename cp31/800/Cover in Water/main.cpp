#include <bits/stdc++.h>
using namespace std;

bool hasThreeConsequtiveEmptyCells(vector<char> a) {
    int n_consequtive_empty_cells = 0;
    for (int i=0; i<a.size(); i++) {
        if (a[i] == '.') {
            n_consequtive_empty_cells++;
        } else {
            n_consequtive_empty_cells = 0;
        }
        if (n_consequtive_empty_cells >= 3) {
            return true;
        }
    }
    return false;
}

int countEmptyCells(vector<char> a) {
    int n_empty_cells = 0;
    for (int i=0; i<a.size(); i++) {
        if (a[i] == '.') {
            n_empty_cells++;
        }
    }
    return n_empty_cells;
}

void runTestCase(int testCase) {
    int n;
    cin>>n;
    vector<char> a(n);
    int n_actions = 0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    
    if (hasThreeConsequtiveEmptyCells(a)) {
        n_actions = 2;
    }
    else {
        n_actions = countEmptyCells(a);
    }

    cout<<n_actions<<"\n";
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