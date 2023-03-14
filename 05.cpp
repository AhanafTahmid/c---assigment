//C223101

#include <iostream>
using namespace std;

// declare a class
class Rectangle{
    double length;
    double height;

  public:
    Rectangle(double l, double h) {
      length = l;
      height = h;
    }

    double area() {
      return length * height;
    }
};

int main() {
  Rectangle r1(4, 5);
  Rectangle r2(5, 8);

  cout << "Area of Rectangle 1: " << r1.area() << endl;
  cout << "Area of Rectangle 2: " << r2.area() << endl;;

  return 0;
}