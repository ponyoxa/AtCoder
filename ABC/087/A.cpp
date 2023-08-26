#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,a,b;
    cin >> x >> a >> b;
    int nokori = x - a;
    nokori = nokori - ( nokori / b ) * b;
    cout << nokori << endl;
}