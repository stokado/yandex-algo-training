#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    uint16_t counter = 0;
    for (size_t i = 0; i < input.size() / 2; ++i) {
        if (input[i] != input[input.size() - i - 1]) {
            counter++;
        }
    }
    cout << counter;
    return 0;
}