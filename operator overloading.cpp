#include<iostream>
using namespace std;
class hello{
    public:
    int value;
    hello(int a)
    {
        value =a;
    }
    hello operator+(const hello &num)
    {
        return hello(value+num.value);   //   dot operator and scope resolution operator do not use in operator overloading
    }
    void hi()
    {
    cout<<value<<endl;
    }
};
int main(){
    hello s1(10),s2(20);
    hello s3=s1+s2;
    s3.hi();
    return 0;
}
