//library
#include<iostream>
using namespace std;

int main(){
	//creating an array of size 10
	int ar[10]={1,2,3,4,5,6,7,8,9,0};
	//printing the results using normal index
	cout<<"print array using the normal index"<<endl;
	//looping index
	for(int i=0;i<10;i++)
	{
	 cout<<ar[i]<<" ";
	}
	cout<<endl;
	//printing result using pointer method
	cout<<"print array using pointer method"<<endl;
	//looping for incrementing the pointer
	for(int i;i<10;i++){

	int *p=ar;
	cout<<*(p+i)<<" ";;


	}
	cout<<endl;
return 0;
}
