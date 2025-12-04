#include <iostream>
#include<string>
using namespace std;
void My_func()
{
	string arrname[4] = {"Apple", "date", "banana", "mango"};
     string* ptr= arrname;
    for (int i = 0; i < 4; i++) {
        cout<<"Fruit NAMES  : "<<*(arrname+i)<<endl;
    }
}
int main() {
    
    My_func();
    return 0;
}