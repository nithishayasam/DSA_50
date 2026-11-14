#include <iostream>
using namespace std;

//function print hello
void printHello(){
    cout << "Hello" << endl;
}

//sum of two numbers
int sum(int a, int b){
    return a + b;
}


int subtract(int a, int b){
    return a - b;
}

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}


//minimum of two numbers
int min(int a, int b){
    return (a < b) ? a : b;
}




//area of different shapes

int areaOfRectangle(int length, int width){
    return length * width;
}


int areaOfCircle(int radius){
    return 3.14 * radius * radius;
}

int areaOfTriangle(int base, int height){
    return 0.5 * base * height;
}


int areaOfSquare(int side){
    return side * side;
}

int areaOfTrapezoid(int base1, int base2, int height){
    return 0.5 * (base1 + base2) * height;
}


int areaOfParallelogram(int base, int height){
    return base * height;
}



int areaOfEllipse(int a, int b){
    return 3.14 * a * b;
}






int main(){
    printHello();
    int result = sum(5, 3);
    cout << "Sum: " << result << endl;

    int difference = subtract(10, 4);
    cout << "Difference: " << difference << endl;


    int fact = factorial(5);
    cout << "Factorial: " << fact << endl;
    
    int minimum = min(10, 4);
    cout << "Minimum: " << minimum << endl;

    // CALCULATE AREA OF SHAPES
    int rectangleArea = areaOfRectangle(5, 3); 
    int circleArea = areaOfCircle(4);
    int triangleArea = areaOfTriangle(6, 4);    
    int squareArea = areaOfSquare(5);
    int trapezoidArea = areaOfTrapezoid(5, 7, 4);
    int parallelogramArea = areaOfParallelogram(6, 4);
    int ellipseArea = areaOfEllipse(3, 2);

    cout << "Rectangle Area: " << rectangleArea << endl;
    cout << "Circle Area: " << circleArea << endl;
    cout << "Triangle Area: " << triangleArea << endl;
    cout << "Square Area: " << squareArea << endl;
    cout << "Trapezoid Area: " << trapezoidArea << endl;
    cout << "Parallelogram Area: " << parallelogramArea << endl;
    cout << "Ellipse Area: " << ellipseArea << endl;

    return 0;

}
