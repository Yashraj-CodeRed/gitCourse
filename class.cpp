#include <iostream>
#include <string>
using namespace std;

class Student {

    private:
        
        string name;
        int roll_no;

    public:

        void s_name(){
            cout << name <<endl;
        }

        void set_name(string n){
            name = n;
        }
};

int main(){

    Student s1;
    s1.set_name("yashraj");
    s1.s_name();
    int size = sizeof(Student);
    cout<<size<<endl;

    // memory allocation on heap ;
    Student *s = new Student; // new allocates the memory on the heap ccording to datatype
    s->set_name("Mohite");
    s->s_name();

    int *ptr = new int;
    *ptr = 10;

    cout<<*ptr;
    
}