// https://www.spoj.com/problems/RMQSQ/
#include <bits/stdc++.h>
#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
using namespace std;

const int MAX_N = 100005;
const int LOG = 17;
int a[MAX_N];
int sparse_table[MAX_N][LOG];

int rangeMinimum(int a, int b) {
    int rangeLen = b - a + 1;
    int i=0;
    vector<int> log_lens;
    while (rangeLen !=0) {
        if (rangeLen & 1) {
            log_lens.push_back(i);
        }
        i++;
    }
    int k = log2(rangeLen);
    return min(sparse_table[a][k], sparse_table[b - (1<<k) + 1][k]);
}

int main() {
    // read input
    int N;
    cin>>N;
    vector<int> a(N);
    repl(i,0,N) {
        cin>>a[i];
        sparse_table[i][0] = a[i]; // ranges of length 2^0 = 1.
    }

    // build sparse table
    for (int j=1; j<LOG; j++) {
        int len = 1 << j; // 2^j
        for (int i=0; i+len-1<N; i++) {
            sparse_table[i][j] = min(
                sparse_table[i][j-1],
                sparse_table[i+(len >> 1)][j-1] // i + len >> 1
            );
        }
    }

    // make Q queries using sparse table
    int Q, A, B;
    cin>>Q;
    repl(x, 0, Q) {
        cin>>A>>B;
        int ans = rangeMinimum(A, B);
        cout<<ans<<"\n";
    }

    return 0;
}