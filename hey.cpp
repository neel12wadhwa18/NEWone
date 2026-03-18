#include<iostream>
using namespace std;

class Base1{
    public:
    void hi(){
        cout<<"Hello"<<endl;
    }
};
class Base2{
    public:
    void hi(){
        cout<<"Hi"<<endl;
    }
};
class Derived: public Base1, public Base2{
    public:
    void hi(){
        cout<<"Hello Workd "<<endl;
    }
    void hello(){
        Base2::hi();
    }
};
int main()
{
    Derived d;
    d.hi();

    return 0;
}