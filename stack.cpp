#include<iostream>
#include<climits>
using namespace std;
class stack{
    int *arr;
    int size;
    int capacity;
    public:

    stack(){
        size = 0;
        capacity = 1;
        arr = new int(capacity);

    }
    ~stack(){
   int *p = &arr[size-1];
   p = nullptr;
    }
    bool full(){
 return size-1 ==INT_MAX;
    }
    bool empty(){
        return size ==0;
    }
    void push(int value){
          if(full()){
            cout<<"stackis overflow"<<endl;
        }
        else{
            if(size == capacity)
            {
                capacity = capacity*2;
            }
            arr[size]=value;
            size++;
        }
    
    }
    void pop()
    {
        if(empty()){
            cout<<"stack is underflow "<<endl;
        }
        else{
          int *p = &arr[size-1];
          delete p;
          size--;
        }
    }
    int top()
    {
        return arr[size-1];
    }
    int peek()
    {
        return arr[size-1];
    }
    int issize()
    {
        return size;
    }
    int iscapacity(){
        return capacity;
    }
    void print(){
        cout<<"stack is : "<<endl;
        for(int i =0;i<size;i++)
        {
            cout<<arr[i]<<"";
        }
        cout<<endl<<endl;
    }
};
int main()
{
    stack s;
    cout<<"size : "<<s.issize()<<endl;
    cout<<"capacity : "<<s.iscapacity()<<endl;
    s.push(43);
     cout<<"size : "<<s.issize()<<endl;
    cout<<"capacity : "<<s.iscapacity()<<endl;
    s.push(54);
     cout<<"size : "<<s.issize()<<endl;
    cout<<"capacity : "<<s.iscapacity()<<endl;
    s.push(63);
     cout<<"size : "<<s.issize()<<endl;
    cout<<"capacity : "<<s.iscapacity()<<endl;
    s.push(72);
     cout<<"size : "<<s.issize()<<endl;
    cout<<"capacity : "<<s.iscapacity()<<endl;
     
    return 0;
}