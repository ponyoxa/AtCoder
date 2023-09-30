#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int N;
    int ans = -1;
    cin >> N >> S;

    for (int i = 0; i < N-2; i++)
    {
        if(S.at(i) == 'A') {
            if(S.at(i+1) == 'B'){
                if(S.at(i+2) == 'C') {
                    ans = i+1;
                    break;
                }
            }
        }
    }

    cout << ans << endl;
}
