#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3] = {1,2,3};
    array<int,4> a= {1,2,3,4};              //both are same and also both are static.

    int size = a.size();
    cout<<a[2]<< endl; 
    cout<<a.at(2)<< endl;                   // both will give the same output.

    cout<<"empty or not  "<< a.empty() << endl;    // return the boolean value .
    cout<<"first element "<< a.front()<<endl;
    cout<< "last element "<< a.back() <<endl; 
}
