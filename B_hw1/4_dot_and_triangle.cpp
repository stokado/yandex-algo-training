
#include <iostream>
#include <cmath>

using namespace std;

struct Point{
    int x = 0;
    int y = 0;
};

int FindSide(const Point& p1, const Point& p2, const Point& f) {
    return (f.x - p1.x) * (p2.y - p1.y) - (f.y - p1.y) * (p2.x - p1.x);
}

bool SideOfPoints(const Point& a, const Point& b, const Point& c, const Point& d) {
    return FindSide(a, b, d) * FindSide(a, b, c) >= 0;
}

uint16_t FindLen(const Point& p1, const Point& p2) {
    return abs((p1.x - p2.x) * (p1.y - p2.y));
}

int main(){
    int d;
    cin >> d;
    Point A;
    Point B = {d , 0};
    Point C = {0, d};
    int x0, y0;
    cin >> x0 >> y0;
    Point D = {x0, y0};
    bool ABD = SideOfPoints(A, B, C, D);
    bool ACD = SideOfPoints(A, C, B, D);
    bool CBD = SideOfPoints(B, C, A, D);
    if (ABD && ACD && CBD) {
        cout << 0;
    } else {
        uint16_t adlen = FindLen(A, D);
        uint16_t bdlen = FindLen(B, D);
        uint16_t cdlen = FindLen(C, D);
        if (adlen <= bdlen && adlen <= cdlen) {
            cout << 1;
        } else if (bdlen <= adlen && bdlen <= cdlen) {
            cout << 2;
        } else {
            cout << 3;
        }
    }
    return 0;
}