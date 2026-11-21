
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& price) {
    int maxProfit = 0;
    int bestBuy = price[0];

    for (int i = 1; i < price.size(); i++) {
        if (price[i] > bestBuy) {
            maxProfit = max(maxProfit, price[i] - bestBuy);
        }

        bestBuy = min(bestBuy, price[i]);
    }

    return maxProfit;
}

int main() {
    vector<int> price = {4,3,6,3,7,6,3,7,2,1};

    cout << maxProfit(price) << endl;

    return 0;
}