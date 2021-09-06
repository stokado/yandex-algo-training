#include <iostream>

using namespace std;

int main(){
    int r;
    cin >> r;
    int i ; 
    cin >> i;
    int c;
    cin >> c;
    if (i == 0) {
        if (r != 0){
            cout << 3;
        } else {
            cout << c;
        }
    } else if (i == 1) {
        cout << c;
    } else if (i == 4) {
        if (r != 0) {
            cout << 3;
        } else {
            cout << 4;
        }
    } else if (i == 6) {
        cout << 0;
    } else if (i == 7) {
        cout << 1;
    } else {
        cout << i;
    }
    return 0;
}