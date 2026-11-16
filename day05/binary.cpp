#include <iostream>
using namespace std;

int decToBinary(int n){
    
    int ans = 0;
    int pow = 1;
    int decNum = n;
    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}




int BinaryToDec(int n){
    int ans = 0;
    int pow = 1;
    int binNum = 110011;
    while(binNum > 0){
        int rem = binNum % 10;
        binNum /= 10;

        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}




int main(){
    //binary representation of a number
    int decNum = 50;
    cout << decToBinary(decNum) << endl;
    cout << BinaryToDec(decToBinary(decNum)) << endl;
    


}