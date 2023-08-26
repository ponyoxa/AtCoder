#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int ans =0;
    if( x % 100 == 0 )
    {
        cout << 100 << endl;
    }
    else {
        for (int i = 0; i < 100; i++)
        {
            x++;
            ans++;
            if( x % 100 == 0){
                break;
            }
        }

        cout << ans << endl;
    }
}