#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    string ans;

    for (int i = 0; i < N; i++) {
        ans += S[i];
        ans += S[i];
    }
    
    cout << ans << endl;

    return 0;
}
