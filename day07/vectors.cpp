#include <iostream>
#include <vector>
using namespace std;

int main() {

    cout << "PROGRAM STARTED" << endl;

    vector<char> vec = {'a','b','c','d'};
    vector<int>vec1= {23,22};

    cout<<" char vector"<<endl;
    cout<<"size function"<<endl;

    cout << "size=" << vec.size() << endl;

    for(char val : vec) {
        cout << val << endl;
    }
     cout<< "Before push back"<<endl;
    for(int val: vec1){
        
        cout<< val <<endl;
    }

    ///int vector
    
    cout<< "size before push back function="<<vec1.size()<<endl;
    vec1.push_back(25);
    vec1.push_back(20);
   
    for(int val: vec1)
{
    cout << val << endl;
} cout<< "after push back size="<< vec1.size() << endl;

    cout<< "pop_back function"<<endl;
    vec1.pop_back();
    for(int val : vec1){
        cout<< val << endl;

    }
   cout<<"front function"<<endl;
   cout<<vec1.front()<<endl;

   cout<<"back function"<<endl;
   cout<<vec1.back()<<endl;

   cout<<"prints specific element at wanted location 2 is:";
   cout<< vec1.at(2) << endl;

   //capacity

  cout<<"size of int vector: "<<vec1.size()<<endl;
  cout<<"capacity of int vector: "<< vec1.capacity()<<endl;




    return 0;
}