#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,w;
    cin >> n >> w;
    int ans = 0;
    int count = 0;
    
    for (int i = 0; ans < n; i++)
    {
        ans += w;
        count++;
    }
    if( ans == n ) {
        cout << count << endl;
    }
    else {
        cout << count - 1 << endl;
    }
    
    
}