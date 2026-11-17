#include <iostream>
using namespace std;

    void reverseArray( int arr[],int sz){
        int start =0,end = sz-1;
        while(start< end){
            swap(arr[start],arr[end]);
            start++;
            end--;

        }

    }   
        
int main(){
    int marks[5]={98, 93, 91, 92, 99};
    for(int i=0; i<5; i++){
        cout<<marks[i]<<endl;
    }
    int smallest = marks[0];
    int largest = INT32_MIN;
    // find the smallest number in the array
    for(int i =0;i<5;i++){
        if(marks[i]<marks[0]){
            marks[0]=marks[i];
            smallest = min(marks[0], marks[i]);//shortcut
            
            
      }
    }
    cout << "The smallest number in the array is: " << marks[0] << endl;
    cout << "The smallest number in the array is: " << smallest << endl; 
    
    //linear search

    int arr[6] = {3,4,8,98,20,2};
    int sz = 6;
    int key;
    cin>> key;
    for(int i=0;i<arr[i];i++){
        if(arr[i]==key){
            cout<<"found the key element"<<endl;
        }
        else{
            cout<<"key element not found"<<endl;
            break;
        }
    }

    reverseArray(arr,sz);
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";//prints the reverse of the array

    }
    cout<<endl;


    //sum and product of all numbers in an array
    int A[4]={2,4,6,8};
    int B[4]={3,6,9,12};
    int C[4];
    int n =4;
    for(int i=0;i<n;i++){
        C[i]=A[i]+B[i];
        cout<<C[i]<<" ";
    }
    cout<<endl;

    int k;
    int j;
    int a[4][4]={3,6,9,12};
    int b[4][4]={2,4,6,8};
    int c[4][4];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            c[i][j]= a[i][j]*b[i][j];
            
            
        }
    }
    cout<<"product matrix\n";
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}