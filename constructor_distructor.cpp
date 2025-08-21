#include <iostream>
#include <string>
using namespace std;

class Customer{
    string name;
    int account_num;
    int balance;
    
    // if we declare the constructor by our self then default constructor will not be called automatically we should define it 

    public:
    //Default constructor    
    Customer(){}

    //parameterised constructor
    // Customer(string n,int acc,int b){
    //     name = n;
    //     account_num = acc;
    //     balance = b;
    // }

    /* Copy Constructor */
    Customer(const Customer& b){
        name = b.name;
        account_num = b.account_num;
        balance = b.balance;
    }
    // inline constructor / initializer list 
    inline Customer(string s ,int n,int a) : name(s),account_num(n),balance(a){}

    void getter(){
        cout << name <<" " << account_num <<" "<<balance<<endl;
    }
};

int main(){
    Customer c1;
    Customer c2("Name",21,1000);
    // c1.getter();
    Customer c3 (c2);
    c2.getter();
    c3.getter();
}