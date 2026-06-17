#include<iostream>
using namespace std;
class number{
	public:
		int real,img;
		number(int x=0,int y=0)
		{
			real = x;
			img=y;
			
		}
		number operator +(number obj)
		{
			number result;
			result.real= real + obj.real;
			result.img= img + obj.img;
			
		}
		void display()
		{
			cout<<real<<"+ i"<<img<<endl;
		}
};
int main()
{
	number n1(10,20);
	number n2(20,70);
	n1.display();
	n2.display();
	number n3= n1+ n2;
	n3.display();
}