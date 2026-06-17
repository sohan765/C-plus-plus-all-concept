// #include<iostream>
// using namespace std;
// int data = 10;

// namespace name2{
//   int data = 20;
// }

// int main()
// { using name2::data;
//     cout<<data<<endl;
//     cout<<name2::data<<endl;
//     cout<<::data<<endl;
//     return 0;
   
// }
// #include <iostream>
// using namespace std;

// int gdata = 10;

// class gmClass {
//     int mdata;
// public:
//     gmClass(int mdata_ = 0) : mdata(++mdata_) { ++gdata; }
//     gmClass() { mdata = 0; gdata = 0; }
//     void print() { cout << "mdata = " << mdata << ", gdata = " << gdata << endl; }
// };

// void fun() {
//     gmClass ob(10);      // calls default constructor
//     ob.print();
// }

// int main() {
//     gmClass ob(0);      // calls default constructor
//     fun();           
//     ob.print();
//     return 0;
// }


// class Account {
//     int acc_no;
//     string acc_type;
//     double acc_balance;
// public:
//     Account(int acc_no_, string acc_type_, double acc_balance_)
//         : acc_no(acc_no_), acc_type(acc_type_), acc_balance(acc_balance_) {}

//     void printStatus() {
//         cout << acc_no << ":" << acc_type << ":" << acc_balance << ":";
//     }
// };

// // class Customer : private Account {
// //     int cust_id;
// //     string cust_name;
// // public:
// //     Customer(int cust_id_, string cust_name_, int acc_no_, 
// //              string acc_type_, double acc_balance_)
// //         : Account(acc_no_, acc_type_, acc_balance_),
// //           cust_id(cust_id_), cust_name(cust_name_) {}

// //     void printStatus() {
// //         Account::printStatus();
// //         cout << cust_id << ":" <<cust_name;
// //     }
// //   };
// //   void print(Account* ac) {
// //     ac->printStatus();   // LINE-1
// // }

// // int main() {
// //     Customer* cObj = new Customer(101, "Rajiv", 2002023, "current", 20000.00);
// //     print(cobj);   // LINE-2
// //     return 0;
// // }
// class A{
//   public:
//   int a;
// };
// class B : protected A{
//   public:
//   int b;
// };
// class C : public B{
//   public:
//   int c;
//   C(int a,int b,int c){
//     a=a;  // line 1
//     b=b;
//     c=c;
//   }
// };
// int main()
// {
//   C cobj(10,20,20);
//  //  cout<<cobj.a<<endl;
//   cout<<cobj.b<<endl;
//   cout<<cobj.c<<endl;
// }
#include <iostream>
using namespace std;
class complex{
  int a,b;
  public:
  void setno(int n1, int n2){
    a = n1;
    b= n2;
  }
  friend complex sumcomplex(complex o1, complex o2);
  /*properties of friend function
    1. not in the  scope of class 
    2. it cn not be call by from the object of that class.
       c1.sumcomplex() == invalid
       3. can be involked without the help of object 
       4. Usually contains the objects of arguments
       5. can be declared inside public or private section of the class
       6. It can not access the members directly by their names and need object_name.member to access any member */
//   void printno(){
//     cout<<"your complex no is "<<a<<"+ "<<b<<"i"<<endl;
//   }
// };
// complex sumcomplex(complex o1, complex o2){
//   complex o3;
//   o3.setno((o1.a + o2.a), (o2.a+o2.b) );
//   return o3;

// }
// int main()
// {
//   complex c1,c2,sum;
//   c1.setno(1,2);
//    c2.setno(1,56);
//    c1.printno();
//    c2.printno();
//    sum = sumcomplex(c1,c2);
//    sum.printno();
   

// }


