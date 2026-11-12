#include <iostream>
using namespace std;

int main(){
    cout << "Hello, World!"<< endl;
    int age = 25;
    cout << "Age: " << age << endl;
    char grade = 'A';
    cout << "Grade: " << grade << endl;



    // // input from user
    int userAge;
    cout << "Enter your age: ";
        cin >> userAge;
    cout << "You entered: " << userAge << endl;
    
    // double price;
    double price;
    cout << "Enter the price: ";
    cin >> price;
    cout << "You entered: " << price << endl;

    // arthmetic operations
    int a = 10, b = 5;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;

    // // relational operators
    cout << "Is a equal to b? " << (a == b) << endl;
    cout << "Is a not equal to b? " << (a != b) << endl;
    cout << "Is a greater than b? " << (a > b) << endl;
    cout << "Is a less than b? " << (a < b) << endl;   
    
    // // logical operators
    bool x = true, y = false;
    cout << "Logical AND: " << (x && y) << endl;
    cout << "Logical OR: " << (x || y) << endl;
    cout << "Logical NOT: " << !x << endl;

    //sum of two numbers
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    //sum of n natural numbers
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int sumNatural = n * (n + 1) / 2;
    cout << "Sum of first " << n << " natural numbers: " << sumNatural << endl;         


    return 0;
}