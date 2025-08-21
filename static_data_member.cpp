#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Create_BankAccount{

    private:
        string name;
        int age;
        int aadhar_no;
        int mobile_no;
        static int total_bank_accounts;
        vector<Create_BankAccount> acc;
    
    public:
        Create_BankAccount(){}

        Create_BankAccount(string name , int age , int aadhar_no , int mobile_no)
            : name(name), age(age), aadhar_no(aadhar_no), mobile_no(mobile_no)
        {
              total_bank_accounts++;
              cout << "Account Created successfully" << endl;
              acc.push_back(*this);
        }

        void detail_display(){
            cout<< "===== Details ====="      << endl
                << "Name      : " << name     << endl 
                << "Age       : " << age      << endl
                << "Mobile_NO : " <<mobile_no << endl;
                
        }

        int get_aadhat()const{
            return aadhar_no;
        }

};

int Create_BankAccount::total_bank_accounts = 0;

int main(){
    
    cout<<"****=== Welcome to the XYZ BANK ===****" << endl;
    
    cout << " Create the account SIR/MADAM " << endl;

    string nameofAccHolder ;
    int age_AccHolder;
    int aadhar_AccHolder;
    int mobile_noAccHolder;

    cout << "Please Enter Your Details " << endl;
    cout << "Name : " ;
    cin  >> nameofAccHolder;
    cout <<"\n";

    cout << "Age : " ;
    cin  >> age_AccHolder;
    cout <<"\n";
    
    cout << "Aadhar Number : " ;
    cin  >> aadhar_AccHolder;
    cout <<"\n";
    
    cout << "Mobile Number : " ;
    cin  >> mobile_noAccHolder;
    cout <<"\n";
    
    Create_BankAccount b1(nameofAccHolder,age_AccHolder,aadhar_AccHolder,mobile_noAccHolder);
    b1.detail_display();

}   