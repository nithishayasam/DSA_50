#include <iostream>
using namespace std;

int main(){
    int i,j;
    int n =4;
    for(i=0;i<n;i++){
        for(j=i+1;j>0;j--){
            cout<<j<<" ";

        }cout<<endl;
    }


    //floyds triangle
    int num=1;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }cout<<endl;
    }
    
    //inverted triangle
    int number=1;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(j=0;j<n-i;j++){
            cout<<(i+1);
            
        }
        cout<<endl;
    }
   //pyramid pattern
    for(i=0;i<n;i++){
        for(j=i;j<n-1;j++){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
          
  return 0;
}