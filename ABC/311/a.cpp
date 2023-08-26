#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    bool A = false;
    bool B = false;
    bool C = false;
    int ans = 0;
    cin >> N >> S;

    for(int i = 0; i < (int)S.size(); ++i){
        char ch = S[i];
        if (ch == 'A')
        {
            A = true;
        }
        else if (ch == 'B')
        {
            B = true;
        } else if (ch == 'C'){
            C = true;
        }

        if( A == true && B == true && C == true) {
            ans = i;
            break;
        }
    }

    cout << ans + 1 << endl;
}
