#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cost = 0;
    double tax = 1.08;
    cost = n * tax;
    if( cost == 206 ){
        cout << "so-so" << endl;
    }
    else if(cost < 206 ) {
        cout << "Yay!" << endl;
    }
    else{
        cout << ":(" << endl;
    }
}