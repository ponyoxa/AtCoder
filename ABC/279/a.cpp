#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int ans = 0;
    cin >> s;

    for (char c : s)
    {
        if ( c == 'v') {
            ans++;
        } else {
            ans += 2;
        }
    }

    cout << ans << endl;
}
