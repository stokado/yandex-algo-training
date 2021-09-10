#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> counter;
    int read;
    cin >> read;
    while (read) {
        counter[read]++;
        cin >> read;
    }
    if (counter.empty()) {
        cout << 0;
    } else {
        cout << counter.rbegin()->second;
    }
    return 0;
}