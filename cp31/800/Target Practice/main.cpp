#include <bits/stdc++.h>
using namespace std;


void runTestCase(int testCase) {
    int score = 0;
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            char c;
            cin>>c;
            if (c == 'X') {
                if (i == 0 || j == 0 || i == 9 || j == 9) {
                    score++;
                }
                else if (i == 1 || j == 1 || i == 8 || j == 8) {
                    score += 2;
                }
                else if (i == 2 || j == 2 || i == 7 || j == 7) {
                    score += 3;
                }
                else if (i == 3 || j == 3 || i == 6 || j == 6) {
                    score += 4;
                }
                else if (i == 4 || j == 4 || i == 5 || j == 5) {
                    score += 5;
                }
            }
        }
    }
    cout<<score<<"\n";
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