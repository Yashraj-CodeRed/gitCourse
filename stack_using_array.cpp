#include <iostream>
#include <vector>

using namespace std;


class Stack{

    private:
        int array[100];
        int top;

    public:

        Stack(){
            top = -1;
        }

        void push(int ele){
            if(top >= 100){
                cout<<"Stack Overflow";
                return ;
            }else{
                array[++top] = ele;
                cout<<"element pushed";
            }

        }

        void pop(){
            if(top < 0){
                cout<<"stack underflow";
                return;
            }else{
                cout << "Element popped";
                top--;
            }
        }

        void peek(){
            if(top<0){
                return;
            }else{
                cout<<array[top];
            }
        }

        void display(){
            for(int i = top ; i >= 0 ;i--){
                cout << " "<<array[i];
            }
        }
};

int main(){
    Stack s;
    s.push(10);
    s.push(11);

    s.display();
}