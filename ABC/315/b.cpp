#include <bits/stdc++.h>
using namespace std;

int main() {
    int M;
    cin >> M;
    vector<int> D(M);
    
    int mid=0;
    int day=0;
    int month=0;
    int nan=0;
    int d=0;

    for (int i = 0; i < M; i++)
    {
        cin >> D[i];
    }

    for (int i = 0; i < M; i++)
    {
        mid += D[i];
    }

    mid = (mid + 1) / 2;

    for (int i = 0; i < M; i++)
    {
        day += D[i];
        if (day >= mid)
        {
            month = i;
            break;
        }
    }

    for (int i = 0; i < month; i++)
    {
        d += D[i];
    }

    nan = mid - d;

    cout << month + 1 << ' ' << nan << endl;
}
