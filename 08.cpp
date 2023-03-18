//C223101
//Printing the average without creating any object of the Average class(Using Static Method)
#include <iostream>
using namespace std;

class Average{
    static int a,b,c;
    public:
    static void avg(int x,int y,int z){
        a=x;b=y;c=z;
        int av = (x+y+z)/3;
        cout<<av<<endl;
    }
};
//initializing static variables
int Average::a;
int Average::b;
int Average::c;

int main() {
    int p,q,r;
    cin>>p>>q>>r;
    Average::avg(p,q,r);

    return 0;
}
