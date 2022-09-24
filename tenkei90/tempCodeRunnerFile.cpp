#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;
    int sum = h * w;
    if( h % 3 == 0 && w % 3 == 0){
        cout << (sum / 4) + 2 << endl;
    }
    else if( sum % 3 == 0){
        cout << sum / 4 + 1 << endl;
    }
    else {
        cout << sum / 4 << endl;
    }
}