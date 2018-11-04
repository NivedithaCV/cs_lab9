//library
#include<iostream>
using namespace std;
//declaring function for strcpy
void strcpy(char *a,char *p)
{
    //looping to copy
    while(*a)
    {
        *p=*a;
        a++;
        p++;
    }
*p='\0';
}

//declaring function for strcat
void strcat(char *a,char *b)
{
    //loooping for copying arrray
    for(int i=0;i<50;i++)
    {
        //giving condition
        if(i<12)
        {
            *a=*a;
        }
        //giving else condition
        else
        {
            *(a+i)=*b;
            b++;
        }
    }
}

//declaring function for strlen
void strlen(char *a)
{
    char c;
    //looping
    for(int i=0;i<50;i++)
    {
        c=*(a+i);
        //condition
        if(c=='\0')
        {
            cout<<"The length of strong p is"<<i<<endl;
            break;
        }
    }
}

//declaring function for strcmp
void strcmp(char *a,char *b)
{
    int c;
    //looping
    for(int i=0;i<50;i++)
    {
        //giving condition
        if((int *)a==(int *)b)
        {
            c=0;
        }
        //else condition
        else
        {
            c=2;
            break;
            
        }
        }
        //condition to print result
        if(c==0)
        {
            cout<<"the strings are equal"<<endl;
            
        }
        //else condition
        else
        {
            cout<<"the strings are not equal"<<endl;
        }
    }
    
    //declaring function for strchr
    void strchr(char *a,char m)
    {
        int n=(int)m;
        //looping
        for(int i=0;i<50;i++)
        {
            //condition
            if(n==(int) a[i])
            {
                cout<<"found in"<<i+1<<endl;
            }
            if(*a='\0')
            {
                break;
            }
            else
            {
                continue;
            }
        }
    }
    
//driver function
int main()
{
    //declaring variables
    char c;
    char p[50]="Welcome";
    char q[50];
    char r[50]="to cyberworld";
    //calling function
    strcpy(p,q);
    cout<<q<<endl;
    strcmp(p,q);
	strcmp(p,r);
	strcat(p,r);
	cout << p<< endl;
	cout<<"The string 'p' is "<<p<<endl;
	strlen(p);
	cout<<"Type a letter in the string "<<p<<" : ";
	cin>>c;
	strchr(p,c);
	return 0;
}

