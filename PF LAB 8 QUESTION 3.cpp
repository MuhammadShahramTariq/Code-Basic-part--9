
#include<iostream>
using namespace std;
void arraypointer()
{
int array[5]={2,4,4,3,4};
int *ptr=array;
for(int i=0;i<5;i++)
{
	cout<<"Value at array loaction : "<<i<<" = "<<*ptr+i<<endl;
	}	
	// also if location is need to print only write ptr;
}

int main()
{
	arraypointer();
	return 0;
}