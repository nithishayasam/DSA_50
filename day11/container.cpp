//container with more water leetcode:33 qns
//implementing arrays concepts using two pointer approach
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> height ={ 1,8,6,2,5,4,8,3,7};
    int lp=0;
    int rp= height.size()-1;
    int maxWater =0;
    while(lp < rp){
        int width = rp - lp;
        int h = min(height[lp],height[rp]);

        int currWt = width * h;
        maxWater = max(maxWater,currWt);

        if (height[lp] < height[rp]) {
            lp++;
        } else {
            rp--;
        }
       
    }

    cout<< "maximum water stored="<< maxWater <<endl;
    return 0;
}