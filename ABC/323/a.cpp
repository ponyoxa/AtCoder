#include <bits/stdc++.h>
using namespace std;


int main() {
    string S;
    cin >> S;

    bool odd = false;

    for (int i = 2; i <= 16; i += 2) {
        if (i <= S.length() && S[i - 1] != '0') {
            odd = true;
            break;
        }
    }

    if (odd) {
        cout << "No" << endl;
    } else
    {
        cout << "Yes" << endl;
    }

    return 0;
}
