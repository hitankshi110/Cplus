#include<iostream>
using namespace std;

class A{
public:
    virtual void display()=0;
};
class B:public A{
public:
    void display(){
        cout<<"B class called "<<endl;
    }
};
class C:public A{
public:
    void display(){
        cout<<"C class called "<<endl;
    }
};
int main(){
    A *a;
    B b;
    C c;
    a=&b;
    a=&c;
    a->display();
    return 0;
}
