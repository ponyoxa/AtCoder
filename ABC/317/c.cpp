#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> route(M, vector<int>(3));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> route.at(i).at(j);
        }
    }

    sort(route.begin(),route.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[2] < beta[2];});

    cout << << endl;
}
