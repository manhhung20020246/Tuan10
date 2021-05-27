#include<iostream>
using namespace std;
struct Point{
int x;
int y;
void print()
{
    cout << x << ' ' << y;
}

};

int main()
{
    Point p;
    cin >> p.x >> p.y;
    p.print();
    return 0;
}
