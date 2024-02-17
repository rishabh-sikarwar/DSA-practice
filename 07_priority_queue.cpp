// in priority queue the first element will be the maximum always.......
#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap........
    priority_queue<int> maxi;

    //min heap..........
    priority_queue<int , vector<int> , greater<int> > mini;

maxi.push(1);    
maxi.push(3);
maxi.push(8);
maxi.push(4);

int n=maxi.size();
for(int i =0 ; i<n ; i++){
    cout<<maxi.top();                  //ascending order........
    maxi.pop();
}cout<< endl;



mini.push(3);
mini.push(8);
mini.push(1);    
mini.push(4);

int m=mini.size();
for(int i =0 ; i<n ; i++){
    cout<<mini.top();                //descending order.......
    mini.pop();
}cout<< endl;

cout<<"Khali  h kya bhai ??  "<< mini.empty();

}