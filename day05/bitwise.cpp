#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nAND = " << bitset<8>(a & b);
    cout << "\nOR = " << bitset<8>(a | b);
    cout << "\nXOR = " << bitset<8>(a ^ b);
    cout << "\nNOT = " << bitset<8>(~a);
    cout << "\nLeft Shift = " << bitset<8>(a << 1);
    cout << "\nRight Shift = " << bitset<8>(a >> 1);



    cout << "\n\nAND = " << (a & b);
    cout << "\nOR = " << (a | b);
    cout << "\nXOR = " << (a ^ b);
    cout << "\nNOT = " << (~a);
    cout << "\nLeft Shift = " << (a << 1);
    cout << "\nRight Shift = " << (a >> 1);

    cout << "\nAND = " << bitset<4>(a & b);
    cout << "\nOR = " << bitset<4>(a | b);
    cout << "\nXOR = " << bitset<4>(a ^ b);
    cout << "\nNOT = " << bitset<4>(~a);
    cout << "\nLeft Shift = " << bitset<4>(a << 1);
    cout << "\nRight Shift = " << bitset<4>(a >> 1);



    return 0;
}