#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ans = 0;

    for (int i = 1; i < N+1; i++)
    {
        ans += i;
    }

    cout << ans << endl;
}
