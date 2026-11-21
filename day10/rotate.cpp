#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5,6};

    int d;
    int n = arr.size();

    cout << "Enter by how many places should the array be left shifted: ";
    cin >> d;

    d = d % n;

    vector<int> temp;

    // Store first d elements
    for(int i = 0; i < d; i++) {
        temp.push_back(arr[i]);
    }

    // Shift remaining elements left
    for(int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Copy temp elements to the end
    for(int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }

    // Print array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}