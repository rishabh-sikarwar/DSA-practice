//  set me hamesha unique value hi aati hai koi repeated values nahi aatii hai..........
//   complixity iski    O(log n )   hoti hai........
#include<iostream>
#include<set>
using namespace std;
int main(){

set<int> s;

s.insert(1);
s.insert(1);
s.insert(2);
s.insert(5);
s.insert(5);
s.insert(5);
s.insert(8);
s.insert(6);

for(auto i:s){
    cout<<i<<endl;
}cout<<endl;

set<int> :: iterator it = s.begin();
it++;
s.erase(it);
for(auto i:s){
    cout<<i<<endl;
}

cout<<"5 present hai ya nahi hai  "<< s.count(5)<<endl;

set<int> :: iterator itr = s.find(5);

for(auto it= itr ; it!= s.end() ; it++){
    cout<< *it <<" ";                           //here cout is *it which is response and it is the reference of the value............
}
// insert , found , erase and count -------------->>>    O(log n )
// size , begin , end, empty -------------------->>>    O(1)
}