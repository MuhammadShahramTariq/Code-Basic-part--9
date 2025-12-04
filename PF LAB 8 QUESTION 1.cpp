#include<iostream>
using namespace std;
 float sum_of_pointer(float& x,float& y,float& z)
{
	float sum;
float *ptr=&x;
float *ptr1=&y;
float *ptr2=&z;

sum=*ptr+*ptr+*ptr2;
return sum;
}

int main()
{
	float x,y,z;
	cout<<"enter first value :";
	cin>>x;
	
	cout<<"enter second value :";
	cin>>y;
	
	cout<<"enter third value :";
	cin>>z;
	cout<<endl;
	cout<<"Sum of pointer variables :"<<sum_of_pointer(x,y,z);
}