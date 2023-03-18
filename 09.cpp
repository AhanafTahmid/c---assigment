#include <iostream>
using namespace std;

class Complex{
    //int a,b;
    public:
    void sum(int w,int x,int y,int z){
        cout<<"Sum: "<<w+y<<"+"<<x+z<<"i"<<endl;
    }
    void diff(int w,int x,int y,int z){
        cout<<"Difference: "<<w-y<<"-"<<x-z<<"i"<<endl;
    }
    void product(int w,int x,int y,int z){
        cout<<(w*y)-(x*z)<<"+"<<(w*z)+(x*y)<<"i"<<endl;
    }
};

int main() {
    Complex obj;
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    obj.sum(p,q,r,s);
    obj.diff(p,q,r,s);
    obj.product(p,q,r,s);
    return 0;
}
