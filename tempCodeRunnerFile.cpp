#include<iostream>
using namespace std;
    void fun(double amt){
        double balance=1000;
        try{
            if(amt>balance)
            {
                throw " the insufficient amount ";
            }
                  else{
            cout << "Transaction successful!" << endl;
        }
    }
    catch(const char* msg){
        cout << "Error: " << msg << endl;
    }
        }
        
    
int main(){
    /*  exception :->   it is an event that occur during the execution(run time ) of a program
      why it is dangerous
        1. sudden termination of a program.
        2. Data loss
        3.crash the whole application


        Exception :-> 1. occur during run time.
                      2. can be handle
                      3. it always arrise from developer mistake



        Error :->  1. occur during compile time
                   2. can not be 
                   3. arrise due to user mistake
    */

    
    double amt;
    cin>>amt;
    fun(amt);
 
    
  
    return 0;

}