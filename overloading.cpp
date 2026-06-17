#include<iostream>
using namespace std;
class Base{
    public:
	int* arr = new int[10];
	virtual void hi()
	{
		for(int i=0;i<4;i++)
		{
			cin>>arr[i];
		}
	
	}

};
class Derived : public Base{
	public:
    int* q=new int[10];
	void hi() override{  
        for(int i=0;i<4;i++){
            if(arr[i]%2==0)
            {
               cout<<arr[i]<<endl;
            }
        }

		
	}
};
int main()
{
	Base *ptr;
	Derived s2;
    s2.Base::hi();
    s2.hi();
	// ptr = &s2;
	// ptr->hi();
	return 0;
}