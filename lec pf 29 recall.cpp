#include<iostream>
using namespace std;

 typedef union  wordrecord{
	int id;
	char sletter;
	char w[6];
	char type;
}wr;//type def new name
int main()
{
	wr w;
	strcpy(w.w,"banana");
	w.sletter='B';
	w.id=430;
	cout<<"id id is:"<<w.id<<endl;
	cout<<"word "<<w.w<<endl;
	cout<<"stat letter is "<<w.sletter<<endl;
	cout<<"word type is "<<w.type<<endl;
	return 0;
}