#include<iostream>
using namespace std;
class Resume{
    public:
    virtual void biodata()=0;
};
class Teacher:public Resume{
    public:
    int id;
    int age;
    string exp;
    string ach;
    Teacher(int a,int b,string c,string d)
    {
        id = a;
        age = b;
        exp=c;
        ach=d;
    }
    void biodata() override{
       cout<<"id is : "<<id<<endl;
       cout<<"age is   :"<<age<<endl;
       cout<<" the is experence   "<<exp<<endl;
       cout<<"the achievement is  "<<ach<<endl;

    }
};
class Student: public Resume{
    public:
    string name;
    int age;
    string result;
    string dis;
    Student(string a,int b,string c,string d)
    {
        name=a;
        age=b;
        result=c;
        dis=d;
    }
    void biodata() override{
    cout<<"student name is :"<<name<<endl;
    cout<<"student age is :"<<age<<endl;
    cout<<"student result  :"<<result<<endl;
    cout<<"student discpline  :"<<dis<<endl;

    }


};
int main()
{
    Resume* r1;
    Student s1("sohan",29,"91.8","good");
    r1 = &s1;
    r1->biodata();

    Teacher t1(243,54,"3 years","high");
    r1 = &t1;
    r1->biodata();


    
    return 0;

}