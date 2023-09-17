#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, a=0, b=0;
    cin >> A >> B;
    a = pow(A, B);
    b = pow(B, A);

    cout << a+b << endl;
}
