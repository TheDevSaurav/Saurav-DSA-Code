#include<iostream>
using namespace std;

int main() {
    int a = 5;
    cout<<a<<endl;
    cout<<"address of a : "<<&a<<endl;


    // pointer creation 

    int* ptr = &a;

    cout<<ptr<<endl;
    cout<<"accessing :" << *ptr << endl;
    cout<<&ptr<<endl;

}
