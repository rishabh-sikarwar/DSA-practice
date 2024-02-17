//  in stack   " last in first out "   this concept is applicable..

#include<iostream>
#include<stack>

using namespace std;
int main(){
stack <string>  s;

s.push("Rishabh");
s.push("Singh");
s.push("Sikarwar");

cout<<" top element -> "<< s.top()<< endl;

s.pop();
cout<<" top element again -> "<< s.top()<< endl;
cout<<"size of stack -> "<< s.size()<< endl;
cout<<"empty or not -> "<< s.empty();



}