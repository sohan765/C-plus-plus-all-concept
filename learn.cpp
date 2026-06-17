#include<iostream>
#include<cstring>
using namespace std;
typedef struct  _string
{
	char *str;
}string;

{
string  operator+(const string& s1, const string& s2 );


		string  s;
	s.str = (char*) malloc(strlen(s1.str) + strlen(s2.str)+1);
	strcpy(s.str,s1.str);
		strcpy(s.str,s2.str);
		return s;
}
	
int main()
{
	String  fname,lname,name;
	fname= strdup("sohan");
	lname = strdup("patel");
	//name = fname+lname;
	cout<<"first name  :-> "<<fname.str<<endl;
	cout<<"last  name  :-> "<<lname.str<<endl;
	//cout<<"complete name  :-> "<<name.str<<endl;
	return 0;
}