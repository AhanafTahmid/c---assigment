#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Traingle {
    int a, b,c,s;
    public:
    Traingle(int x, int y,int z) {
        a = x;
        b = y;
        c = z;
        s = a+b+c;
        cout << "Area of triangle " << sqrt(s*(s-a)*(s-b)*(s-c))<< endl;
        cout << "Perimeter of Triangle " << s << endl ;

    }
};

int main() {
    Traingle Object(3, 4, 5);
    return 0;
}