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



// these commments were only added in feature1 branch and not in the main branch, this is all me learning about branches