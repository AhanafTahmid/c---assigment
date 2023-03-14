//C223101
//Get the area of a Rectangle
#include <iostream>
using namespace std;

class Rectangle{
    int length,breadth;
    public:
    void setDim(int l,int b){
        length = l;
        breadth = b;
    }
    void getArea(){
        cout<<length*breadth<<endl;
    }
};

int main() {
    Rectangle obj;
    int ll,bb;
    cin>>ll>>bb;
    obj.setDim(ll,bb);
    obj.getArea();

    return 0;
}
