#include<iostream>
using namespace std;
int f(int a=1,int b=2){
    return a*b;
}
int main(){
   // int a;
   // cout<<"e nter the value of a "<<endl;

   // cin>>a;
   int x=5,y=6;
   f();
   f(x);
   f(x,y);

   // cout<<a<<endl;
return 0;

}