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
void Thamchieu(Point &p){
cout << "tham chieu: " << &p << endl;
}
void Thamso(Point p){
cout << "tham so: " << &p << endl;}

int main(){
Point p;
cout << &p << endl;
Thamchieu(p);
Thamso(p);
return 0;
}
