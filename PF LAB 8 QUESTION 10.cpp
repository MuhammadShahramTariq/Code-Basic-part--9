#include <iostream>
#include <string>

using namespace std;

struct temp {
    float fahren;
    float celsius;
};


void temperature(temp *tp)
 {
    tp->celsius = (tp->fahren - 32)*5/9; 
    cout<<"fahrenheit: "<<tp->fahren << endl;
    cout<<"celsius: "<<tp->celsius << endl;
}

void myfunc(string (&arrname)[4]) {
    cout << "fruit names:"<<endl;
    for (int i = 0; i < 4; i++) {
        cout << arrname[i] << endl;
    }
}

int main() 
{
    temp tp;
    cout<<"Enter temperature in fahrenheit: ";
    cin>>tp.fahren; 
    temperature(&tp);

    string arrname[4] = {"apple","date","banana","mango"};
    myfunc(arrname); 

    return 0;
}