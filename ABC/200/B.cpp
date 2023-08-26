#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        if( n % 200 == 0 )
        {
            n = n / 200;
        }
        else
        {
            n = n * 1000 + 200;
        }
    }
    cout << n << endl;
}