#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> street;
    for (int i = 0; i < 10; ++i) {
        int temp;
        cin >> temp;
        street.push_back(temp);
    }
    vector<int> paths;
    for (int cur = 0; cur < street.size(); ++cur) {
        if (street.at(cur) == 1) {
            int left = 11;
            for (int search = cur; search >= 0; --search) {
                if (street.at(search) == 2) {
                    left = cur - search;
                    break;
                }
            }
            int right = 11;
            for (int search = cur + 1; search < street.size(); ++search) {
                if (street.at(search) == 2) {
                    right = search - cur;
                    break;
                }
            }
            paths.push_back(min(left, right));
        }
    }
    cout << *max_element(paths.begin(), paths.end());
    return 0;
}