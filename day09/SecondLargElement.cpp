#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int SecondLargestElement(vector<int>& arr , int n){
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i =0 ;i<n;i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else  if (arr[i]< largest && arr[i] >slargest){
            slargest = arr[i];
        }
    } 
       
    if(slargest == INT_MIN){
        return -1;
    }
 

    return slargest;


}

int main(){

    vector<int> arr = {1,2,3,5,7,9};
    int n = arr.size();
    int ans = SecondLargestElement(arr,arr.size());

    
    cout << ans << endl;
    return 0;
}