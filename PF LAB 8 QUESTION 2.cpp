#include<iostream>
using namespace std;
void pointer(int& x,float& y)
{
	float sum;
int*ptr=&x;
float *ptr1=&y;
cout<<"values of variables"<<endl;
cout<<"value of x : "<<*ptr<<endl;

cout<<"Value of y : "<<*ptr1<<endl;

cout<<"Address "<<endl;
cout<<"Address of x : "<<ptr<<endl;
cout<<"Address of y : "<<ptr1<<endl;

}

int main()
{
	int x;
	float y;
	cout<<"enter value of x :";
	cin>>x;
	
	cout<<"enter value of y :";
	cin>>y;
	
	pointer( x,y);
	
	
	return 0;

	
}