//library
#include <iostream>
using namespace std;

int main()
{ 
	//declaring variable
	int a=10;	
	int b;
	int *p=&a;
	//storing value of the pointed by p in b
	b=*p;
	//printing result
	cout<<"a="<<a<<endl<<"b="<<b<<endl<<"*p="<<*p<<endl;
	//assigning the value
	a=2;
	b=3;
	//printing the result
	cout<<"a="<<a<<endl<<"b="<<b<<endl<<"*p="<<*p<<endl;
	return 0;
}

