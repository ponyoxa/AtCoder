#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int ft = 0;
    ft = t * t + 2 * t + 3;

    int ft1 = 0;
    ft1 = ft + t;

    ft1 = ft1 * ft1 + 2 * ft1 + 3;

    int ft2 = 0;
    ft2 = ft * ft + 2 * ft + 3;

    int aft =0;
    aft = ft1 + ft2;

    int ans = 0;
    ans = aft * aft + 2 * aft + 3;

    cout << ans << endl;
}