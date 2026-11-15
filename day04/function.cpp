
#include <iostream>
using namespace std;

//pass by value

int sum(int a, int b){
    a =  a+10;
    b = b+10;
    return a + b;
}


int changeY(int y){
    y = 2*y;
    cout << "y inside function: " << y << endl;
    return y;
}


//calculate the sum of digits of a number

int sumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

//calculate the ncr bionomial coefficient
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}

int nCr(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n - r));
}

//prime or not
bool isPrime(int n){
    if(n <=1){
        return false;   
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){
            return false;
            
        }
    }
    return true;
}




//print fibonnaci series up to n terms
void printFibonacci(int n){
    int t1 = 0, t2 = 1, nextTerm;
    cout << "Fibonacci Series: ";
    for(int i = 1; i <= n; ++i){
        cout << t1 << ", ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}


int main(){
    int a=10, b=20;
    cout << sum(a, b) << endl;

    int y = 5;
    changeY(y);
    cout << "y: " << y << endl;

    cout << "Sum of digits of 15:" << sumOfDigits(15) << endl;

    cout << "6C3: " << nCr(6, 3) << endl;
    printFibonacci(6);

    cout << "Is 17 prime? " << isPrime(17) << endl;

return 0;

}