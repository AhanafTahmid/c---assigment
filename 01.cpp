//C223101
#include<iostream>
using namespace std;
class Student{
    public:
    string name = "Jamshed";
    int roll_no=2;
};

int main(){
    Student obj;
    cout<<obj.name<<" ";
    cout<<obj.roll_no<<"\n";
    return 0;
}