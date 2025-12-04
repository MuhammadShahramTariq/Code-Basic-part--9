#include<iostream>
using namespace std;
void geek()
{
	int var[3]={4,3,2};
	int*ptr;
	ptr=var;
	cout<<"elements in array : "<<endl;
	for(int i=0;i<3;i++)
	cout<<ptr[i]<<" ";
}
int main()
{
	int *ip;
	int x;
	ip=&x;
	*ip=100;
	cout<<*ip<<" "<<ip<<" "<<x<<" "<<endl;
	geek();
	int num=27;
	int *num_pointer=&num;
	cout<<"Size of int : "<<sizeof(int)<<endl;
	cout<<"Before increament :"<<*num_pointer<<endl;
	num_pointer++;
	cout<<"After increament :"<<*num_pointer<<endl;
	
	cout<<"Before Decrement :"<<*num_pointer<<endl;
	num_pointer--;
	cout<<"After Decrement :"<<*num_pointer<<endl;
	
	return 0;
}