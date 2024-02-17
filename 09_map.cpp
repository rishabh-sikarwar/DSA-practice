// isme ek key ek hi value ko point karte hai and ek value do key ko point kar sakti hai vo chalega...........
#include<iostream>
#include<map>
using namespace std;
int main(){
map<int , string> m;

m[1] = "Rishabh";
m[19] = "singh";
m[2] = "sikarwar";

for(auto i: m){           //   the sign ( : )  means "belongs to "............
    cout<<i.first<<endl;          // iska output sorted order me aayega     ..........................1       2         19 

} 

// ek or tarika insert karne ka hai
m.insert({5, "bheeem"});
for(auto i:m){
    cout<<i.first<< " " << i.second<<endl;
}

cout<<"finding 13 ->  "<< m.count(13);


}