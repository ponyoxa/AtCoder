#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,g,b;
    cin >> r >> g >> b;
    int sum = 0;
    sum = 100 * r + 10 * g + b;
    if( sum % 4 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}