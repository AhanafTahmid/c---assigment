//C223101
#include<iostream>
using namespace std;
class Student{
    public:
    string address;
    int roll_number,phone_number;

    Student(int x, int ph, string ad){
        roll_number = x;
        phone_number = ph;
        address = ad;
    }
};

int main(){

    Student shofi(1, 1234590, "Address1");
    Student jamshed(2, 2986321, "Address2");

    cout << "Shofi:\n";
    cout << "Roll Number: " << shofi.roll_number << "\n";
    cout << "Phone Number: " << shofi.phone_number << "\n";
    cout << "Address: " << shofi.address << "\n\n";

    cout << "Jamshed:\n";
    cout << "Roll Number: " << jamshed.roll_number << "\n";
    cout << "Phone Number: " << jamshed.phone_number << "\n";
    cout << "Address: " << jamshed.address << "\n";

    return 0;
}