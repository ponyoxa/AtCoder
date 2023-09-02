#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, p;
    cin >>n>>m>>p;

    if(n<m){
        cout << 0 << endl;
    } else {
        int day = m, ans = 1;
        while (n>=day + p)
        {
            day += p;
            ans++;
        }
        cout << ans << endl;
    }
}
