#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
    double x, y;

    Point(double x = 0, double y = 0) {
        this->x = x;
        this->y = y;
    }
};

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}


double distance(Point p) {
    return sqrt(pow(p.x, 2) + pow(p.y, 2));
}

int main() {
    Point p1(2, 3), p2(5, 7);

    cout << "Distance (coordinates): "
         << distance(2, 3, 5, 7) << endl;

    cout << "Distance (Point objects): "
         << distance(p1, p2) << endl;

    cout << "Distance (from origin): "
         << distance(p1) << endl;

    return 0;
}