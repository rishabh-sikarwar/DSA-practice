// queue is equal to line   matlab "first in first out " .........

#include<iostream>
#include<queue>
using namespace std;
int main(){
queue <string> q;

q.push("Rishabh");
q.push("Singh");
q.push("Sikarwar");

cout<<"first element-> " << q.front()<<endl;
q.pop();
cout<<"first element-> " << q.front()<<endl;

// saare ke saare operations ki complixity    O(1)   hai , har stl ki ....... 


}