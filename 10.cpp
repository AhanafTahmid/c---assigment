//C223101
#include <iostream>
using namespace std;

class Volume{
    int length,breadth,height;
    public:
    //Initializtion List
    Volume(int l,int b,int h):length(l),breadth(b),height(h){
        cout<<"Volume: "<<l*b*h<<endl;
    }
};

int main() {
    int p,q,r;
    cin>>p>>q>>r;
    Volume obj(p,q,r);
    
    return 0;
}
