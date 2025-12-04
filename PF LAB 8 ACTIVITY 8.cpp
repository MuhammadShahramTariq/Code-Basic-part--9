#include <iostream>

using namespace std;

struct temp {
    float fahren;
    float celsius;
};

void temperature(temp *tp) {
	 tp->celsius=(tp->fahren - 32) *5/9; 
    cout<<"fahrenheit: "<<tp->fahren<<endl;
	cout<<" celsius: "<<tp->celsius<<endl;
}

int main()
 {
	
    temp tp;
    cout<<"Eneter temperature in fahrenhiet :";
    cin>>tp.fahren ; 
   

    temperature(&tp);
    return 0;
}