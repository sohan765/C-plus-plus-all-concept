#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

template<typename T> T Mymax(T x)
{
    return (x%2==0)?1:0;
}
int main()
{
    cout<<Mymax<int>(20)<<endl;
    cout<<Mymax<float>(20.66);
    // cout<<"thisis a bigger one "<<Mymax<char>('a','b')<<endl;
}