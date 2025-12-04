#include<iostream>
using namespace std;
void swap_function(int& x,int& y)
{
	int temp;
temp=x;
x=y;
y=temp;	


}

	int main()
	{
			int x=21,y=65;
	cout<<"value of x before   :"<<x<<endl;
	cout<<"value fo y before   :"<<y<<endl;
	
		swap_function(x,y);
	cout<<"value of x before   :"<<x<<endl;
	cout<<"value fo y before   :"<<y<<endl;

		return 0;
	}