#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X, sum=0;
    cin >> N >> X;
    vector<int> scores(N-1);
    for (int i = 0; i < N-1; i++)
    {
        cin >> scores[i];
    }

    sort(scores.begin(), scores.end());
    scores.pop_back();
    scores.erase(scores.begin());

    for (int i : scores) {
        sum += i;
    }
    
    if(X <= sum) {
        cout << 0 << endl;
    } else if ( X - sum <= 100) {
        cout << X - sum << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}

// このコードだと、順番がちょっと違うんだとおもう。