#include <iostream>
#include <string>

using namespace std;

class Person{

    protected:
        string name;
    public:
        Person(string name) : name(name){}
        Person(){}
        
        void intro(){
        cout << "My name is "<< name << endl;
    }
};

class Employee:public Person{
    protected:
        int salary;

    public:
        Employee(string name ,int salary):Person(name),salary(salary){}

        
        void salary_(){
            cout << salary << endl;
        }
};

class Manager:public Employee{
    private:
        string department;

    public:
    Manager(string name , int salary , string department):Employee(name,salary){
        this->department = department;
    }

    void display(){
       cout<< name << " " << salary << " " << department << " " << endl; 
    }
};

int main(){
    Manager MC("Hello",10000,"software");
    MC.display();
}