
//C223101
#include <iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void sum(int x,int y){
        a=x;b=y;
        cout<<"Sum: "<<a+b<<"i"<<endl;
    }
    void diff(int x, int y){
        a=x;b=y;
        cout<<"Difference: "<<a-b<<"i"<<endl;
    }
    void product(int x, int y){
        a=x;b=y;
        cout<<a*b<<endl;
    }
};

int main() {
    Complex obj;
    int p,q;
    cin>>p>>q;
    obj.sum(p,q);
    obj.diff(p,q);
    obj.product(p,q);
    return 0;
}
