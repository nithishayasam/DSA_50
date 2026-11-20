//REMOVE DUPLICATES IN AN SORTED ARRAY

#include<iostream>
#include<vector>
using namespace std;


int removeDuplicates(vector<int> &arr , int n){
    int i =0;
    for(int j =1 ;j<n;j++){
        if(arr[i]!= arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }return i+1;
}

int main() {
    vector<int> arr = {1,2,2,3,3,5,7,7,9};

    int k = removeDuplicates(arr, arr.size());

    cout << "Number of unique elements = " << k << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
