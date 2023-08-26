#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int size = 0;
    size = s.size();

    if( s.at(size - 1) == 't'){
        cout << "ist" << endl;
    }
    else{
        cout << "er" << endl;
    }
}