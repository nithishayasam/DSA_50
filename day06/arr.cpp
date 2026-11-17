
#include <iostream>
using namespace std;

int main()
{
     int A[10][10], B[10][10], C[10][10];
     int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter first matrix:\n";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter second matrix:\n";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] * B[i][j];
        }
    }
    cout << "Product matrix:\n";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }


    //swap min nd max in an array
    int n=5;
    int arr[n]={1,3,6,78,77};
    int min , max , minpos=0, maxpos=0;
    min = max = arr[0];
    for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
        minpos= i;
    }
    if (arr[i]>max){
        max = arr[i];
        maxpos=i;

    }
    
}

int temp = arr[minpos];
arr[minpos]=arr[maxpos];
arr[maxpos]= temp;
cout <<"Array after swapping min and max:\n";
for(int i =0;i<n;i++){
    cout<< arr[i]<< " ";
}
    return 0;
}