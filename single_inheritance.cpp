#include <iostream>
#include <string>

using namespace std;

class Human{

    private :
        string religion;

    public:
        string name;
        int age;

    Human(string name , int age){
        this->name = name ;
        this->age = age;
    }

    void display(){
        cout << name <<" " << age <<endl;        
    }
};

class Student : public Human{
    public:
        int rollnumber;
        int pincode, fees;

    Student(string name ,int age , int rollnumber ,int pincode ,int fees) : Human(name,age){
        this->rollnumber = rollnumber;
        this->pincode = pincode;
        this->fees = fees;
    }
    
    void display(){
        cout << name << " " << age << " " << rollnumber << " " << pincode << " " << fees << " " << endl;
    }

};

int main(){
    Human h("aditya",19);
    Student s("Yashrj",22,21,412306,200);
    s.display();
    h.display();
}