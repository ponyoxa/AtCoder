#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    ans = n / 100;
    if ( n % 100 == 0){
        cout << ans << endl;
    }
    else {
        cout << ans + 1 << endl;
    }
}