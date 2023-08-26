#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    vector<string> s(N);

    for (int i = 0; i < N; i++)
    {
        cin >> s[i];
    }

    int count_day = 0;
    int max_day = 0;
    for (int i = 0; i < D; i++)
    {
        bool free = true;
        for (int j = 0; j < N; ++j)
        {
            if (s[j][i] != 'o') {
                free = false;
                break;
            }
        }

        if(free == true) {
            count_day++;
            max_day = max(max_day, count_day);
        } else {
            count_day = 0;
        }
    }

    cout << max_day << endl;
}

