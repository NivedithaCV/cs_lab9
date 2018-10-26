//library
#include<iostream>
using namespace std;

int main()
{
	//declaring variables
	int c;
	char d;
	double e;
	//declaring pointers
	int *p1=&c;
	char *p2=&d;
	double *p3=&e;
	//printing the results
	cout<<"The size of int is"<<sizeof(c)<<"bytes"<<endl;
	cout<<"the size of char is "<<sizeof(d)<<"bytes"<<endl;
	cout<<"the size of double is"<<sizeof(e)<<"bytes"<<endl;
	cout<<"the size of pointer for int is"<<sizeof(p1)<<"bytes"<<endl;
	cout<<"the size of pointer for char is "<<sizeof(p2)<<"bytes"<<endl;
	cout<<"the size of pointer for double is"<<sizeof(p3)<<"bytes"<<endl;
	return 0;
}

