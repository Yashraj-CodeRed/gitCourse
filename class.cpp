#include <iostream>
using namespace std;
class New{

    public:
        int a;
        int b;

    int add(int a ,int b){
        return a+b;
    }
};

int main(){
    std::cout<< " hello git" << std::endl;

    New a1;
    a1.a = 10;
    a1.b = 20;

    int ans = a1.add(a1.a,a1.b);

    cout << ans;
    return 0;
}