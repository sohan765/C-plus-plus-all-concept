#include<iostream>
using namespace std;
class Hello{
    public:
    int hi(int a,int b)
    {
        return a+b;
    }
    double hi(double a, double b)
    {
        return a+b;
    }
};
class Base{
    public:
    virtual void hi()
    {
        cout<<"virtual base class"<<endl;
    }
};
class Derived:public Base{
    public:
    void hi()override{
        cout<<"it is the derived class"<<endl;
    }
};
class Abstact{
    public:
    virtual void hi()=0;
   
};
class dabstact:public Abstact{
    public:
    void hi()override{
        cout<<"it is the abstract  class"<<endl;
    }
};
int main()
{
    Hello s1;// overlaoding
    cout<<s1.hi(10,20)<<endl;
    cout<<s1.hi(20.90,30.10)<<endl;
    Base *s2;//   overriding
    Derived s3;
    s2 = &s3;
    s2->hi();
    dabstact* p1=new dabstact; //pure viutual function
    p1->hi();
}