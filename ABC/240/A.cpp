#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if( b == a - 1 || b == a + 1){
        cout << "Yes" << endl;
    }
    else if (( a == 10 && b == 1) || ( a == 1 && b == 10)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}