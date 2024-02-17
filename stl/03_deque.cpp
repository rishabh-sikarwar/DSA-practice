#include<iostream>
#include<deque>

using namespace std;
int main(){
deque<int> d;

d.push_back(1);
d.push_front(2);

for(int i:d){
    cout<<i<<" ";
}cout<<endl;

// d.pop_back();

// for(int i:d){
//     cout<<i<<" ";
// }cout<<endl;  


cout<< "Print zeroth Index element -> " << d.at(0) << endl ;

// and front , back , empty or not  all properties are similar to vector  

d.erase(d.begin() , d.begin() + 1);                // erase me input dena compulsory hota hai kaha se kaha tak     [ -----  )
cout<< " after the erase -> " << d.size()<< endl;


}