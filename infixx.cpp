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
char postfix[] = { '1','2','3','*','+','4','-' },ch;
stack<int> s;
for(int i=0;i<7;i++)
{
    ch = postfix[i];
    if(isdigit(ch))
    {
        s.push(ch-'0');
    }
    else{
        int op1=s.top();
        s.pop();
        int op2=s.top();
        s.pop();
        switch(ch)
        {
            case '*' : s.push(op2*op1);
            break;
            case '/' : s.push(op2/op1);
            break;
            case '+' : s.push(op2+op1);
            break;
            case '-' : s.push(op2-op1);
            break;
        }

    }
}
cout<<"\n Evalution " <<s.top();
    return 0;
}
