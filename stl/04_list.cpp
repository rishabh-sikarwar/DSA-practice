// it shows the double linklist  iska matlab isme do pointer hote hai ek front ka or ek back ka .........................
#include<iostream>
#include<list>

using namespace std;
int main() {
list<int> l;

l.push_back(1);
l.push_front(2);

for(int i: l){
    cout<<i<<" ";
}cout<<endl;

l.erase(l.begin());     //ye pehla element ko erase karta jayega.............


list<int> n(6, 100);
for(int i: n){
    cout<<i<<" ";
}


// and rest of all things are same as previous ones.............................
}