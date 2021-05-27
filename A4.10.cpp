#include<iostream>
using namespace std;
struct point{
int x, y;
};
int main(){
point p;
cout << &p << endl;
cout << &p.x << endl;
cout << &p.y << endl;
return 0;
}
