#include<iostream>
using namespace std;
struct home
{
	float heigth;
	float width;
};
 void calling_function();
int main()
{
	int num=10;
	int*ptr1=&num;
	int**ptr=&ptr1;
	calling_function();
	
}
void calling_function()
{
	home tr;
	float *ptr=&tr.heigth;
	float *ptr1=&tr.width;
	cout<<"Enter the height :";
	cin>>*ptr;
	cout<<"Enter the width :";
	cin>>*ptr1;
	
	cout<<endl;
	
	cout<<"heigth : "<<*ptr<<endl;
	cout<<"width : "<<*ptr1<<endl;
	
	cout<<"address :"<<endl;
	
	cout<<"heigth : "<<ptr<<endl;
	cout<<"width : "<<ptr1<<endl;
	
}