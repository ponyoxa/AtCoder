#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;


    // int x = 0, y = 0;
    // bool flg = false;

    // while (x <= N) {
    //     y = 0;
    //     while (y <= N) {
    //         if (pow(2, x) * pow(3, y) == N) {
    //             flg = true;
    //             break;
    //         }
    //         y++;
    //     }
    //     if (flg) {
    //         break;
    //     }
    //     x++;
    // }

    while (N % 2 == 0) {
        N /= 2;
    }
    while (N % 3 == 0) {
        N /= 3;
    }

    if (N == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
