#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> street;
    for (int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        street.push_back(temp);
    }
    cout << street[street.size() / 2];
    return 0;
}