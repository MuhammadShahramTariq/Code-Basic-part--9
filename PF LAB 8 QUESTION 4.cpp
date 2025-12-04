#include <iostream>
using namespace std;

void array(int* arr, int size) {
    for (int i=0; i<size;++i) {
        cout<<*(arr + i); 
    cout<<endl;
    }
}

void addfunc(int* arr, int size) {
    for (int i=0; i<size;++i) {
        *(arr + i)+=10; 
    }
}

int main() {
    int arr[]={15, 25, 30, 64, 85}; 
    int size=sizeof(arr[0]);

    cout<<"before adding 10: ";
    array(arr,size);  

    addfunc(arr,size);  

    cout<<"adding 10: ";
    array(arr, size);  

    return 0;
}