#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
typedef struct stack{
    char data[20];
    int top;

}stack;
int empty(stack *p)
{
    return (p->top == -1);
}
int top(stack *p)
{
    return (p->data[p->top]);
}
void push(stack *p,char x)
{
    p->data[++(p->top)] = x;
}
void pop(stack *p)
{
    if(!empty(p))
    (p->top)=-1;

}
int main()
{
    char str[10] = "ABCDEG";
    stack<char> s;
    for(int i = 0; i<strlen(str);i++)
    {
        s.push(str[i]);
    }
    cout<<"reversed string "<<"  ";
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}
