#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    bool is321 = true;
    cin >> N;

    if(N.length()==1) {
        //1桁はtrue
    } else if(N.length() == 2) {
        if(N.at(0) > N.at(1)){
            
        } else {
            is321 = false;
        }
    } else if (N.length() == 3) {
        if(N.at(0) > N.at(1) && N.at(1) > N.at(2)){
            
        } else {
            is321 = false;
        }
    } else if (N.length() == 4) {
        if(N.at(0) > N.at(1) && N.at(1) > N.at(2) && N.at(2) > N.at(3)){
            
        } else{
            is321 = false;
        }
    } else if (N.length() == 5) {
        if(N.at(0) > N.at(1) && N.at(1) > N.at(2) && N.at(2) > N.at(3) && N.at(3) > N.at(4)){
            
        } else {
            is321 = false;
        }
    }

    if(is321 == true) {
        cout << "Yes" << endl;
    } else {
        cout <<"No" << endl;
    }

    
}
