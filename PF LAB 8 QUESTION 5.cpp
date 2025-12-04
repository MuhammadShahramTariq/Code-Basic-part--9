
#include<iostream>
using namespace std;
int lenght(char *mystr)
{
char *ptr=mystr;
int stringlenght =0;
while(*ptr!='\0')
{
	stringlenght++;
	ptr++;
}
return stringlenght;
}

int main()
{
	char arrstring[]="Shahram khan";
	int stringlenght=lenght(arrstring);
	cout<<lenght(arrstring);
	return 0;
}