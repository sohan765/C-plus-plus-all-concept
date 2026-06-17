#include<iostream>
using namespace std;
class hello{
	public:
	// static const int a=10;
	static int a;
	void hi();
};
 void hello::hi(){
	cin>>a;
	
}
int main()
{
	cout<<hello::a;
	return 0;
}