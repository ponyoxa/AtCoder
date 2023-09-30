#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> h(M);

    for (int i = 0; i < M; i++)
    {
        cin >> h[i];
    }

    for (int i = 1; i < N+1; i++)
    {
        int ans = INT_MAX;
        int today = i;
        int low = 0;
        int high = M - 1;
        // for (int j = 0; j < M; j++)
        // {
        //     hanabi = h[j];
        //     if(today <= hanabi){
        //         ans = hanabi - today;
        //         cout << ans << endl;
        //         break;
        //     }
        // }
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(h[mid] >= today) {
                ans = min(ans, h[mid] - today);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
