// program to compute distance between two points.
#include <iostream>
#include <cmath>
using namespace std;
class Point;
class calculator
{
public:
    float computeDistance(Point, Point);
};
class Point
{
    int x;
    int y;
    friend float calculator ::computeDistance(Point, Point);

public:
    Point(void) : x(0), y(0) {}
    Point(int X, int Y) : x(X), y(Y) {}
    void displayPoints()
    {
        cout << "The Points (x,y) are "
             << "(" << x << "," << y << ")" << endl;
    }
};
float calculator ::computeDistance(Point p1, Point p2)
{
    float sub1, sub2, sum;
    sub1 = p2.x - p1.x;
    sub2 = p2.y - p1.y;
    sum = (sub1 * sub1) + (sub2 * sub2);
    return sqrt(sum);
    // direct approach====>
    //  return (sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2)));
}
int main()
{
    Point p1, p2;
    p1.displayPoints();
    p2 = Point(5, 5);
    p2.displayPoints();
    calculator calc;
    float res;
    res = calc.computeDistance(p1, p2);
    cout << "The distance between the above given points is " << res << endl;
    return 0;
}