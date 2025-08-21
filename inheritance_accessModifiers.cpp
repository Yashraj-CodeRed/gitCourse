#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Human{
    
    private:
        string religion;
    // if the access specifire is protected,public this data will be inherated in the form of access specifier used during inheritance 
    /*
        private > protected > public
    */
    public:
        string name;
        int age;
};

class Student : protected Human{

    private:
        int fees;

    public:
        string subject;
        int standard;
        int roll_no;

    Student(string name,int age,string subject,int standard,int roll_no):subject(subject),standard(standard),roll_no(roll_no){
        this->name = name;
        this->age = age;
    }

    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<subject<<endl;
        cout<<standard<<endl;
        cout<<roll_no<<endl;
    }
};


int main()
{
    Student s1("yashraj",23,"english",7,21);
    s1.display();

    return 0;
}