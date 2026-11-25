#include<iostream>
#include<vector>
using namespace std;


void changeA(int* ptr){
    *ptr = 20; //pass by refernce
}

int main(){
    int a =5;
    int *p = &a;
    int **q = &p;


    cout <<*p<<endl;
    cout<<**q<<endl;
    cout<< p <<endl;
    cout<< *q << endl;

    changeA(&a);
    cout<< "inside main function: "<< a <<endl;
    return 0;
}