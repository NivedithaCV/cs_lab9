//library
#include<iostream>
using namespace std;

int main()
{
//declaring array
char word[20];
//asking user for the input
cout<<"input about 10 characters of a string"<<endl;
//reading input
cin>>word;
//declaring ponter
char *p=word;
//looping to print character one after the other
for(int i=0;i<20;i++){
cout<<p+i;
cout<<endl;}
return 0;
}
