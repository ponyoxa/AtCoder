#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    vector<int> vec(N);
    bool stop = false;
    int stop_count = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }

    while ( stop == true)
    {
        stop_count = 0;
        for (size_t i = 0; i < N; i++)
        {
            if ( vec.at(i) - vec.at(i + 1) == 1) {
                stop_count++;
            }
            if ( vec.at(i) - vec.at(i + 1) != 1) {
                if ( vec.at(i) > vec.at(i + 1)) {
                    vector<int> ins_vec;
                    for (size_t i = 0; i < vec.at(i) - vec.at(i + 1); i++)
                    {
                        
                    }
                }
            }
        }
        
        if (stop_count == N) {
            stop = true;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << vec.at(i) << endl;
    }
}
