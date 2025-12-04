#include<iostream>
using namespace std;
void geek()
{
	int var[4]={3,5,6,7};
	int *ptr=&var[4];
	int* ptr0=var;
	int* ptr1=&var[1];
	int* ptr2=&var[2];
	int* ptr3=&var[3];
	cout<<"the value of ptr :"<<*ptr1<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<"value of address :"<<&var[i]<<endl;
			}
			cout<<endl;
				while(ptr<4)
	{
		cout<<"value of var :"<<*ptr<<endl;
		ptr++
			}
			
}
int main()
{
	geek();
	return 0;
}