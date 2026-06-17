#include<iostream>
using namespace std;
class hello{
    public:
    int a;
    hello(int c )
    {
        a=c;
    }
    hello operator &&( const hello &num)
    {
        return hello(a&&num.a);
    }

};
int main()
{    int a,b;
    cout<<"enter the value of a and b" <<endl;
    cin>>a>>b;
    hello s1(a);
    hello s2(b);

    hello s3 = s1&&s2;
    cout<<s3.a<<endl;
    return 0;


}