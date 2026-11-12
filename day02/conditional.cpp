#include <iostream>
using namespace std;

int main(){
    int n = 45;
    if(n>0){
        cout << n << " is a positive number." << endl;
    }
    else if(n<0){
        cout << n << " is a negative number." << endl;
    }
    else{
        cout << n << " is zero." << endl;
    }




    int num;
    int count =1;
    cin >> num;
    while(count <= num){
        cout << count << endl;
        count++;
    }

    int sum = 0;
    for(int i=1; i<=num; i++){
        sum += i;
        cout << "Sum of first " << i << " natural numbers is: " << sum << endl;
    }   
    

    //sum of nth natural number
    int sum1 = 0;
    int n1;
    cout << "Enter a number: ";
    cin >> n1;  
    for(int i=1; i<=n1; i++){
        sum1 += i;
        
    }
cout << "Sum of first " << n1 << " natural numbers is: " << sum1 << endl;




    int n2 = 10;
    bool isPrime = true;
    for(int i=2; i<=n2-1; i++){
        if(n2 % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << n2 << " is a prime number." << endl;
    }
    else{
        cout << n2 << " is not a prime number." << endl;
    }


   // Factorial of a number
    int n3; 
    cout << "Enter a number: ";
    cin >> n3;
    int factorial = 1;
    for(int i=1; i<=n3; i++){
        factorial *= i;
    }   

    cout << "Factorial of " << n3 << " is: " << factorial << endl;





    //patterns 
    int n4 = 4;
    for(int i=1;i<=n4;i++){
        for(int j=1;j<=n4;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
    //star pattern
    for(int i=1;i<=n4;i++){
        for(int j=1;j<=n4;j++){
            cout<< "*" <<" ";
        }cout<<endl;
    }

    //ABCD square pattern
    int n5=4;

    for(int i=1;i<=n5;i++){
        char ch='A';
        for(int j=1;j<=n5;j++){
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }
    
    //increasing pattern
       for(int i=1;i<=n5;i++){
         char ch='a';
           for(int j=1;j<=i;j++){
              cout<<ch;
              ch=ch+1;
        }
        cout<<endl;
    }


    //square pattern for numbers
     int number =1;
     for(int i =0 ; i<n5;i++){
        for(int j= 0;j<n5;j++){
            cout<<number<<" ";
            number++;

        }
        cout<<endl;
     }


     int n6=3;
     int character = 'a';
     for(int i =0 ; i<n6;i++){
        for(int j= 0;j<n6;j++){
            cout<<char(character)<<" ";
            character++;

        }
        cout<<endl;
     }


     //star traingle pattern
        int n7=4;
        for(int i=0;i<n7;i++){
            for(int j=0;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }

     int n8=4;
    
     for(int i=0;i<n8;i++){
        int k=i;
        for(int j=0;j<=i;j++){
            cout<<k+1<<" ";
        
        }
        cout<<endl;
     }
     int ch1='A';
     for(int i=0;i<n8;i++){
    
        for(int j=0;j<=i;j++){
            cout<<char(ch1)<<" ";
            
        }
        ch1++;
        cout<<endl;
     }
    
     for(int i=0;i<n8;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
     }

    return 0;
}