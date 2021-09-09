#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int length;
    cin >> length;
    int b_count;
    cin >> b_count;
    vector<int> blocks;
    for (int i = 0; i < b_count; ++i) {
        int temp;
        cin >> temp;
        blocks.push_back(temp);
    }
    if (length % 2 != 0) {
        for (const auto &i : blocks) {
            if (i == length / 2 || blocks.size() == 1) {
                cout << i;
                return 0;
            }
        }
    }
    uint16_t left = blocks.at(0);
    for (const int& i : blocks) {
        if (i < length / 2) {
            left = i;
        } else {
            break;
        }
    }
    sort(blocks.begin(), blocks.end(), greater<>());
    uint16_t right = blocks.at(0);
    for (const int& i : blocks) {
        if (i >= length / 2 && i != left) {
            right = i;
        } else {
            break;
        }
    }
    cout << left << " " << right;
    return 0;
}