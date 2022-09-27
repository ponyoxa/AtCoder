#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if( i % 3 != 0 && i % 5 != 0)
        {
            ans += i;
        }
    }
    cout << ans << endl;
}