#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    int in, out; // in != out
    cin >> in >> out;
    int ct = abs(in - out);
    if (ct < n / 2){
        cout << ct - 1;
    } else {
        cout << n - ct - 1;
    }

    return 0;
}