#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if( n >= 42 ){
        n++;
    }

    cout << "AGC" << setw(3) << setfill('0') << n << endl;
}