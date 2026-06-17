#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int a)
    {
        data=a;
        next = NULL;
        
    }
};
class Deque{
    Node* front;
    Node* rear;
    int size;
    public:
    Deque(){
    front = NULL;
    rear= NULL;
    size=0;
    }
    void empty()
    {
        return ;
    }
    void push_front(int val)
    {
        Node *temp = new Node(val);
        if(temp=NULL){
            cout<<"the deque is overflow"<<endl;
            return;

        }else if(front==NULL)
        {
            front = rear= temp;
           
        }
        else{
            temp->next= front;
            front = temp;
        }
        size++;
        return;
    }
    void push_back(int val)
    {
        Node *temp = new Node(val);
        if(temp == NULL)
        {
            cout<<"deque is overflow"<<endl;
            return;
        }
        if(front == NULL)
        {
            front = rear= temp;
            

        }
        else{
            rear->next=temp;
          rear= temp;
        }
        size++;
        return;
    }
    void pop_front(){
        if(rear==NULL|| front ==NULL)
        {
          cout<<"deque is under flow"<<endl;
          return;
        }
        else if( front == rear)
        {
            Node *curr = front;
            front = rear = NULL;
            delete curr;
            size--;
            return;
        }
        else{
            Node *curr = front;
            front = front->next;
            curr->next =NULL;
            delete curr;
            size--;
            return;
        }

    }
    void pop_back()
    {
          if(rear==NULL|| front ==NULL)
        {
          cout<<"deque is under flow"<<endl;
          return;
        }
        else if( front == rear)
        {
            Node *curr = front;
            front = rear = NULL;
            delete curr;
            size--;
            return;
        }
        else{
            Node * curr = front;
            while(curr->next=rear)
            {
      curr= curr->next;
            }
            curr->next = NULL;
            rear = curr;
            delete curr;
            size--;
            return;
        }
    }
};
int  main()
{

    return 0;
} 