#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;
    bool ans = false;

    for (int i = 0; i < N - 1; i++)
    {
        if (S[i] == 'a' && S[i + 1] == 'b')
        {
            ans = true;
            break;
        }
        else if (S[i] == 'b' && S[i + 1] == 'a')
        {
            ans = true;
            break;
        }
    }

    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
