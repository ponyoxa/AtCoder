#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    for (char c : S)
    {
        if ( c == 'a' ||  c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            ;
        }
        else
        {
            cout << c;
        }
    }

    cout << endl;
}
