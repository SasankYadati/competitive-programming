#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> a) {
    int ans = 0;
    for (int i=0; i<a.size(); i++) {
        ans += a[i];
    }
    return ans;
}

int findNumHappyPeople(vector<int> a, int r) {
    int n = a.size();
    int num_happy_people = 0;
    int n_empty_seats = 2 * r - sum(a);
    for (int i=0; i<n; i++) {
        num_happy_people += ((a[i] >> 1) << 1);
        a[i] = a[i] & 1;
    }

    for (int i=0; i<n; i++) {
        if (a[i] == 1) {
            if (n_empty_seats > 0) {
                num_happy_people++;
                n_empty_seats--;
            }
        }
    }

    return num_happy_people;
}

void runTestCase(int testCase) {
    int n,r;
    cin>>n>>r;
    vector<int> a(n);
    int num_happy_people = 0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    cout<<findNumHappyPeople(a,r)<<"\n";
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