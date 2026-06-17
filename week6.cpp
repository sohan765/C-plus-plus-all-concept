#include<iostream>
using namespace std;
// class parent{
//     public:
//     void display()
//     {
//         cout<<"parent ";
//     }
// };
// class child : public parent{
//     public:
//     //using parent::display;
//    void display(){
//     cout<<"parent";
//    }
//     void display(int)
//     {
//         cout<<"child";
//     }
// };

    // int *p;
    // int x = 10;
    // int y;
    // p = &x;
    // y = *p;
    // *p = 20;
    // &x = p;
    // child c;
    // c.display();
// static volatile int i;
// void fun(void){
//     i=0;
//     do{
//         cout<<"the value of i is "<<i<<endl;
        
//     }while(i!=100);

// }
// void function(int&,int);
// int function(const int &x)
// {
//     return (x+1);
//     /
// }
// int function(int x=25,int y)
// {
//     cout<<"x="<<x<<"y="<<y<<endl;

// }
// int main()
// {
//     // int a =10,b;
//     // b = function(a);
//     // cout<<"a="<<a<<"&a="<<&a<<endl;
//     // cout<<b<<endl;
//     int a,b;
//     function(10);

//     return 0;
// }
int add(int a,int b)
{
    cout<<a+b<<endl;
}
double add(float a,float b)
{
    cout<<a+b<<endl;
}
int main()
{
    int a=12,b=20;
    add(a,b);
    float c=23.32,d=23.68;
    add(c,d);
    return 0;
}