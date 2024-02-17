#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;       //initially the size is "0".
    cout<<v.size() <<v.capacity()<<endl;

    v.push_back(1);
    cout<<v.size()<<v.capacity()<<endl;

    v.push_back(2);
    cout<<v.size()<<v.capacity()<<endl;

    v.push_back(3);
    cout<<v.size()<<v.capacity()<<endl;

    
    cout<< "front element  " << v.front() << endl;
cout<< "back element  " << v.back() << endl;

v.pop_back();

cout<<"after pop" <<endl;
for(int i : v){
    cout<<i<< "  ";
}cout<<endl;


v.clear();                       //isme size zero hota hai but capacity zero nahi hota hai.
//vector ko khali kar diya gaya hai isme.
 cout<<v.size()<< " "<<v.capacity()<<endl;



 
}