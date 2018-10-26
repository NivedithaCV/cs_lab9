//library
#include<iostream>
using namespace std;

int main()
{
	//declaring a string to store name
	char ar[]="NIVEDITHA";
	//declaring a pointer variable
	char *p=ar;
	//printing using normal index method
	cout<<"printing using normal index method:";
	//looping
	for(int i=0;i<9;i++){
	cout<<ar[i];}
	cout<<endl;
	//printing using pointer method
	cout<<"printing using pointer method:";
	for (int i=0;i<9;i++)
	{
	cout<<*(p+i);
	}
	cout<<endl;

return 0;
}
