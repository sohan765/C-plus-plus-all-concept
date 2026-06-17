#include<iostream>
using namespace std;
class math{
    public:
    int a,b;

    math(int a, int b){
        int result=a+b;
        cout<<result;
    }
     math(int a, int b,int c){
        int result = a+b+c;
        cout<<result;
    }
     math(int a)
    {
        cout<<a+10<<endl;
        }
};

int main()
{
math m1(10);
math m2(10,20);
math m3(10,20,30);

}