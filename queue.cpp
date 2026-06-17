#include<iostream>
using namespace std;
class queue
{
int *arr;
int rear,front;
int size= 0;
int s;
int capacity;
public:
queue(int n)
{
capacity = n;
s = 0;

arr = new int[size];
front = -1;
rear = -1;
}
bool empty()
{
    return (front == -1 && rear == -1) || (front>rear);
}
bool full()
{
    return rear+1 == capacity;
}
int issize()
{
    return size;
}
void enqueue(int value)
{
 if(full()){
    cout<<"quueue is full "<<endl;
 }
 else if(size == capacity){
    cout<<"queue is overflow :"<<endl;
 }
 else{
    rear++;
    arr[rear ] = value;
    if(front == -1)
    {
        front++;
    }
    size++;

 }
}
void dequeue()
{
    if(empty()){
        cout<<"queue is underflow "<<endl;
    }
    else{
front++;

size--;
    }
}
void print(){

cout<<"Queue is : ";

for(int i=front; i<=rear; i++){

cout<<arr[i]<<" ";

}

cout<<endl<<endl;
}
int isfront()
{
    return arr[front];
}
int isrear()
{
    return arr[rear];
}
};
int main()
{
    queue q(5);


q.enqueue(10);

cout<<"Size : "<<q.issize()<<endl;

cout<<"Front : "<<q.isfront()<<endl;

cout<<"Rear : "<<q.isrear()<<endl;

q.print();
    return 0;
}