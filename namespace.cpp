// #include<iostream>
// #include<cstdlib>
// using namespace std;
// namespace hello
// {
//     int abs(int n)
//     {
//         if(n>127 || n<-128)
//         return 0;
//         if(n<0)
//         return -n;
//         return n;
//     }
// }
// int main()
// {
//     cout<<hello::abs(-203)<<endl;
//     cout<<hello::abs(-20)<<endl;
//     cout<<hello::abs(45)<<endl;
//         cout<<abs(-203)<<endl;
//         cout<<abs(-20)<<""<<abs(45)<<endl;
//         return 0;
// }

// oops lab 4 about constructor and distructor in c++  Dynamic memory allocation and array of objects.
// #include<iostream>
// using namespace std;
// class Hello{
// 	public:
// 		int a,b,num1,num2 ;
		
// 		Hello(int a, int b)
// 		{
// 			num1 = a;
//             num2 = b;
// 		}
// 		Hello(Hello& ss, Hello& bb){
// 			num1 = ss.num1;
//             num2 = bb.num2;
// 		}
//         ~Hello()
// 		{
// 			cout<<"the disturctor call :"<<a<<b<<endl;
// 		}
// };
// int main()
// {
// 	Hello s1(10,34);
// 	Hello s2(s1);
// 	cout<<s2.num1<<endl;
//     cout<<s2.num2<<endl;
// 	return 0;
// }
// int main()
// {    char ch;
//     cout<<"enter your choice 1. '+',2.'-',3.'*',4.'/'"<<endl;
//     cin>>ch;
//     int a,b;
//     cout<<"enter the value of a and b"<<endl;
//     cin>>a>>b;
//     switch(ch)
//     {
//         case '+': cout<<"the sum is " <<a+b<<endl;
//         break;
//         case '-': cout<<"the subtraction is " <<a-b<<endl;
//         break;
//         case '*': cout<<"the multiplecation is " <<a*b<<endl;
//         break;
//         case '/': cout<<"the divide is " <<a/b<<endl;
//         break;
//         default:
//         cout<<"invalid choice : "<<endl;
//     }

//   return 0;
// }


// Access specifier 
// public: public is accessible in anywhere
// protected : it is accessible for  inside the class member and inheritance
// private : private member can be accessible inside the class

// #include<iostream>
// using namespace std;
// class hello{
//     private:
//     int age;
//     string name;
//     public:
//     hello(string a,int b)
//     {
//         name = a;
//         age = b;
//     }

    
//    void setdata()
//     {
//         cout<<"enter the age : "<<endl;
//         cin>>age;
//         cout<<"enter the name : "<<endl;
//         cin>>name;
//     }

    // }
    // void display()
    // {
    //     cout<<"the age is = "<<age<<endl;
    //     cout<<"the name is = "<<name<<endl;
    // }
//     friend void setdata(hello s1);
//     friend void display(hello s1);
// };
//  void display(hello s1)
//     {
//         cout<<"the age is = "<<s1.age<<endl;
//         cout<<"the name is = "<<s1.name<<endl;
//     }
// int main()
// {
//     hello s1("sohan",19);
//     //s1.setdata();
//     display(s1);
//     int x;
//     cout<<"the no";cin>>x;
//     return 0;
// }

#include<iostream>
using namespace std;
class hello{
    int a ;
    int b;
    void hi();
    // hello(int c,int d){
    //     a= c;
    //     b=d;
    // }
    void setdata()
    {
        cout<<"enter the value of a and b"<<endl;
        cin>>a>>b;
    }
 

   // friend void setdata(hello s1);
    friend void display(hello s1);
    friend class hello2;
};


void display(hello s1){ 
    

    
    cout<<"value of a and b is  "<<s1.a<<"  "<<s1.b<<endl;
    cout<<s1.a+s1.b;
}
class hello2{
    public:
    void hi(hello ss){
   ss.a = 10;
   ss.b = 20;
   cout<<ss.a*ss.b<<endl;
    }
};
int main()
{
     hello s1(s1);
     hello2 s2;
     display(s1);
     s2.hi(s1);
    
    return 0;
}
