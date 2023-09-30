#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M ,ans=9;
    string S, T;
    cin >> N >> M >> S >> T;

    bool mae = false;
    bool ushiro = false;

    if(T.starts_with(S)) {
        mae = true;
    }

    if(T.ends_with(S)) {
        ushiro = true;
    }

    if(mae ==true && ushiro == true) {
        ans = 0;
    } else if(mae ==true && ushiro == false) {
        ans = 1;
    } else if(mae ==false && ushiro == true) {
        ans = 2;
    } else {
        ans = 3;
    }
    cout << ans << endl;
}
