#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int year_of_joining;
    string address;

    void input(){
        cin>>name;
        cin>>year_of_joining;
        cin>>address; 
    }
    void display_info() {
        cout<<name << "\t\t" << year_of_joining << "\t\t" << address << endl;
    }
};

int main() {
    Employee emp[3];
    for(int i=0;i<3;i++){
        emp[i].input();
    }
    cout <<"Name\t" <<"Year of Joining\t\t"<<"Address\t"<<endl;
    for(int i=0;i<3;i++){
        emp[i].display_info();
    }

    return 0;
}
