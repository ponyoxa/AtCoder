#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, H, X,ans;
    ans = 0;
    cin >> N >> H >> X;
    vector<int> P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }

    for (int i = 0; i < N; i++)
    {
        int after = 0;
        after = H + P[i];
        if ( after >= X ) {
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;

}
