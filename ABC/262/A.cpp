#include <bits/stdc++.h>
using namespace std;

int main() {
    int Y;
    cin >> Y;
    int diff = Y % 4;
    
    if( diff == 2){
        cout << Y << endl;
    }
    else if(diff == 0) {
        cout << Y + 2 << endl;
    }
    else {
        cout << Y + diff<< endl;
    }
    }
