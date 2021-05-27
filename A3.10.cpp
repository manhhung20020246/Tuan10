#include<iostream>
using namespace std;
struct Point{
int x, y;
Point(){};
Point(int a, int b){
x=a;
y=b;
}
};

Point mid_point(const Point P1, const Point P2)
{
    Point p;
    p.x = (P1.x + P2.x)/2;
    p.y = (P1.y + P2.y)/2;
    return p;
}

int main()
{
    Point P1(3,4);
    Point P2(5,6);
    Point p = mid_point(P1, P2);
    cout << p.x << ' ' << p.y;
    return 0;
}
