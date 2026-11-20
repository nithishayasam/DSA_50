#include<iostream>
#include<vector>
using namespace std;

//checks if is an array is sorted or not

int isSorted(int n, vector<int> a){
    for(int i =1 ;i<n;i++){
        if(a[i]>=a[i-1]){

        }
        else{
            return false;
        }
    }return true;

}


int main(){

    
    vector<int> a= {7,2,3,5,7,9};
    int n = a.size();

    if(isSorted(n,a)){
        cout<< "Array is sorted"<<endl;
    }
    else{
        cout<<" Array is not sorted"<<endl;
    }
    


    return 0;
}