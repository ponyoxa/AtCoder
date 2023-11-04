#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B;
    cin >> B;

    A = 1;
    bool ans = false;

    while (true)
    {
        if (pow(A, A) == B)
        {
            ans = true;
            break;
        }

        if (pow(A, A) > B)
        {
            break;
        }

        A++;
    }

    if (ans)
    {
        cout << A << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
