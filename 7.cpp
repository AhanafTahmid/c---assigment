//C223101
#include <iostream>
using namespace std;

class Area{
    int length,breadth;
    public:
    Area(int l,int b){
        length = l;
        breadth = b;
    }
    void returnArea(){
        cout<<length*breadth<<endl;
    }
};

int main() {
    int ll,bb;
    cin>>ll>>bb;
    Area obj(ll,bb);
    obj.returnArea();

    return 0;
}
