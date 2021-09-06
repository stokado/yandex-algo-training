#include <iostream>

using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if (x > 12) {
        cout << 1;
    } else if (y > 12) {
        cout << 1;
    } else if (x == y){
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}