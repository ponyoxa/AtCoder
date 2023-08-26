#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    int sum = 0;
    for (int i = 0; sum < n; i++)
    {
        sum = sum + i;
        count++;
    }
    cout << count -1 << endl;
}