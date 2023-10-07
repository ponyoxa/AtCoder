#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> results(N);

    for (int i = 0; i < N; i++)
    {
        cin >> results[i];
    }

    map<int, int> scores;
    int playerNum = 1;
    int win=0;

    for (const string &r : results) {
        win = 0;
        for (char c : r)
        {
            if (c == 'o') {
                win++;
            }
        }
        scores.insert(pair<int, int>(playerNum, win));
        playerNum++;
    }

    vector<pair<int, int>> sortedScores(scores.begin(), scores.end());

    sort(sortedScores.begin(), sortedScores.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second > b.second;
    });

    for (const auto& pair : sortedScores) {
        cout << pair.first << endl;
    }

    return 0;
}
