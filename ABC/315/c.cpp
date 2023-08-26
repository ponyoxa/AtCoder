#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> fs(n);
    
    for(int i = 0; i < n; i++) {
        int f,s;
        cin >> f >> s;
        fs.at(i) = make_pair(s, f);
    }

    sort(fs.rbegin(), fs.rend());

    int MAX=0;

    // for (int i = 0; i < n-1; i++)
    // {
    //     if(MAXs > fs[i].first){
    //         break;
    //     }
    //     for (int j = 1; j < n; j++)
    //     {
    //         int s = fs[i].first;
    //         int f = fs[i].second;
    //         int s2 = fs[j].first;
    //         int f2 = fs[j].second;

    //         if(f != f2) {
    //             MAX = max(MAX, s + s2);
    //             MAXs = max(MAXs, s);
    //         }
    //         else
    //         {
    //             if( s > s2 ){
    //                 MAX = max(MAX, s + s2 / 2);
    //                 MAXs = max(MAXs, s);
    //             }
    //             else
    //             {
    //                 MAX = max(MAX, s2 + s / 2);
    //                 MAXs = max(MAXs, s2);
    //             }
    //         }
    //     }
    // }
    for (int i = 0; i < n-1; i++)
    {
        int s = fs[i].first;
        int f = fs[i].second;

        if(f != fs[i+1].second) {
            MAX = max(MAX, s + fs[i+1].first);
        }
        else
        {
            if( s > fs[i+1].first ){
                MAX = max(MAX, s + fs[i+1].first / 2);
            }
            else
            {
                MAX = max(MAX,fs[i+1].first + s / 2);
            }
        }
    }
    cout << MAX << endl;
}