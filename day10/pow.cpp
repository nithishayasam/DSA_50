//practiced how to handle the time complexity and manage edge cases


#include<iostream>
#include<vector>
using namespace std;


double myPow(double x, int n){
    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1 && n %2 == 0) return 1.0;
    if(x==-1 && n %2 == 0) return -1.0;
    long binform = n;
    if(n<0){
        x = 1/x;
        binform = -binform;
    }
    double ans = 1;
    while(binform >0){
        if(binform %2 ==1){
        ans = ans * x;
    }
    x = x*x;
    binform /=2;
}
  return ans;
} 


int main(){
    double x;
    int n;

    cout<< "Enter x and n"<<endl;
    cin >>x >>n;

    cout <<myPow(x,n)<<endl;
    return 0;
}