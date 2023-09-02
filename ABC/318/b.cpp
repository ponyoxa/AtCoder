#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N),B(N),C(N),D(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    int S = 0;

    for (int x = 0; x <= 100; x++) {
        for (int y = 0; y <= 100; y++) {
            int count = 0;
            for (int i = 0; i < N; i++) {
                if (x >= A[i] && x < B[i] && y >= C[i] && y < D[i]) {
                    count++;
                }
            }
            if (count > 0) {
                S++;
            }
        }
    }
    cout << S << endl;
    return 0;
}
