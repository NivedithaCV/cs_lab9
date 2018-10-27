//library
#include<iostream>
using namespace std;

int main()
{
//declaring character aray
char word[20];
//asking user for the input
cout<<"input about 10 characters of a string"<<endl;
//reading input to the array
cin>>word;
//declaring pointer
char *p=word;
//looping
for(int i=20;i>0;i--){
//printing the result
cout<<p+i;
cout<<endl;}
return 0;
}
