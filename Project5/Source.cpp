#include "Point.h"
Point operator+ (int a, Point& b) // 10 + obj
{
    Point s(b.GetX() + a, b.GetY() + a);
    return s;
}
Point operator+( Point& b, int a) // obj + 10
{
    Point s(b.GetX() + a, b.GetY() + a);
    return s;
}
Point& operator++(Point&obj) // ++obj
{
    obj.SetX(obj.GetX() + 10);
    obj.SetY(obj.GetY() + 10);
    return obj;
}
Point operator++(Point& obj,int) // obj++
{
    Point temp = obj;

    obj.SetX(obj.GetX() + 10);
    obj.SetY(obj.GetY() + 10);

    return temp;
}
int operator*(int a, Point& obj)
{
    return a * obj.GetX() * obj.GetY();
}
Point operator*(Point& obj,int a)
{
    Point temp(a * obj.GetX(),a * obj.GetY());
    return temp;
}
int main()
{
    Point obj1(10, 20);
    Point obj2(1, 2);

    
   



}