#include <iostream>
using namespace std;

class Employee {
public:
    int salary,number_of_hour;
    void getInfo(int s,int noh){
        salary = s;
        number_of_hour = noh;
    }
    void AddSal() {
        if(salary<500) salary+=10;
    }
    void AddWork(){
        if(number_of_hour>6) salary+=5;
    }
};

int main() {
    Employee obj;
    int ss,nn;
    cin>>ss>>nn;
    obj.getInfo(ss,nn);
    obj.AddSal();
    obj.AddWork();
    cout<<"Final Salary: "<<obj.salary<<endl;
    return 0;
}



