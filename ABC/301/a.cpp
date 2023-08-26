#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    string winner;
    int count_a = 0;
    int count_t = 0;
    cin >> N >> S;


    for (size_t i = 0; i < S.length(); i++)
    {
        if( S.at(i) == 'A') {
            count_a++;
        } else {
            count_t++;
        }
    }
    if( count_a == count_t ) {
        for (size_t i = 0; i < S.length() - 1 ; i++)
        {
            if( S.at(i) == 'A') {
                count_a++;
            } else {
                count_t++;
            }
        }
        if( count_a > count_t ) {
            winner = 'A';
        } else {
            winner = 'T';
        }
    } else {
        if( count_a > count_t ) {
            winner = 'A';
        } else {
            winner = 'T';
        }
    } 

    cout << winner << endl;
}
