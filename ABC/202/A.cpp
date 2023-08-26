#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    a = 7 - a;
    b = 7 - b;
    c = 7 - c;
    int ans = 0;
    ans = a + b + c;
    cout << ans << endl;
}