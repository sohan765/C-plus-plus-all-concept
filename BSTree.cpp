#include<iostream>
#include<bits/stdc++.h>
#include<stdexcept>
using namespace std;
class A{
    public:
    string user;
    void hi()
    {
        cout<<"enter user name "<<endl;
        cin>>user;

    }

};
class B:public A{
   public:
   void hi()
   {

   try{
    if(user=="hello")
    {
        cout<<"welcome in the software"<<endl;
    }
    else if(user!="hello")
    {
        throw invalid_argument("invalid string");
    }
    // else if(user.lenght()<=10)
    // {
    //     throw out_of_range("your string lenght exiceed out of lenght");
    // }
    
    else{
        throw " user is not correct";
    }
   }
   catch(invalid_argument e)
   {
    cout<<"the user name is not correct your error is invalid string"<<e.what()<<endl;
   }
//    catch(out_of_range e)
//    {
//     cout<<"the user name is not correct your error excited lenght"<<e.what()<<endl;
//    }
   
   catch(...)
   {
    cout<<"something went wrong"<<endl;
   }
}
};
int main()
{
    A s1;
    B s2;
    s1.hi();
}