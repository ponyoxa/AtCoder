#include <bits/stdc++.h>
using namespace std;

int main() {
    int M;
    string A, B, C;
    cin >> M >> A >> B >> C;
    // 提出できず
    int abtime,bctime,mintime,tmp = 0;
    bool non = false;

    for (int i = 0; i < M; i++)
    {
        mintime = min(mintime, tmp);
        tmp = 0;
        char a = A[i];
        for (int j = 0; j < M; j++)
        {
            char b = B[j];
            if(a != b){
                abtime++
            } else {
                for (int k = 0; k < M; k++)
                {
                    char c = C[k];
                    if(a != c){
                        bctime++
                    } else {
                    }
                }
            }

            tmp = abtime + bctime;
        }
    }

    cout << << endl;
}
