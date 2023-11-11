#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> a(N);
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (a[i] <= X)
        {
            sum += a[i];
        }
    }

    cout << sum << endl;

    return 0;
}
