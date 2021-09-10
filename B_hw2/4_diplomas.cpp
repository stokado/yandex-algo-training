#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> folder;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        folder.push_back(temp);
    }
    sort(folder.begin(), folder.end());
    int counter = 0;
    for (int i = 0; i < folder.size() - 1; ++i) {
        counter += folder.at(i);
    }
    cout << counter;
    return 0;
}