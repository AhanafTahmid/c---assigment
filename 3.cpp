//C223101
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Triangle{
    public:
    int a=3,b=4,c=5,s;
    int area(){
        s=a+b+c;
        double ar = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<ar<<endl;
    }
    int perimeter(){
        s=a+b+c;
        cout<<s<<endl;
    }
    
};

int main(){
    Triangle obj;
    obj.area();
    obj.perimeter();

    return 0;
}