#include <iostream>
using namespace std;

class Matrix{
    int r,c;
    public:
    Matrix(){
        r = 10;
        c = 10;
    }
    void rows(){
        cout<<r<<endl;
    }
    void column(){
        cout<<c<<endl;
    }
    void setElements(){

    }
    void add_matrices(){

    }
    void multiply_matrices(){

    }
    
};

int main() {
    Matrix obj;
    obj.rows();
    obj.column();
    obj.setElements();
    obj.add_matrices();
    obj.multiply_matrices();
    
    return 0;
}



