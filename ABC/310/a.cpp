#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,P,Q,Dmin,W;
    Dmin = 0;
    W = 0;
    cin >> N >> P >> Q ;
    vector<int> D(N);
    for (int i = 0; i < N; i++) {
        cin >> D[i];
        if(i == 0) {
            Dmin = D[i];
        } else {
            if(Dmin > D[i]) {
                Dmin = D[i];
            }
        }
    }

    W = Q + Dmin;
    if ( P <= W ) {
        cout << P << endl;
    } else {
        cout << W << endl;
    }
}
