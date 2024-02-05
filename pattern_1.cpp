#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // char a='A';
    // int count=0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         char patt=a+count;
    //         cout<<patt<<" ";
    //         count++;
    //     }
    //     cout<<endl; 

    
    
    
    
    
    
    
    
    
    
    
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int k = 1; k < i; k++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = i ; j <= n; j++)
    //     {
    //         cout << j ;
    //     }
    //     cout<<endl;
    // }







for (int i = 0; i < n; i++)
{
    for (int fir = 0; fir < n-i ; fir++)
    {
    cout<<fir+1;
    }
    for(int sec=0;sec<i;sec++){
        cout<<"*";
    }
    for(int sec=0;sec<i;sec++){
        cout<<"*";
    }

   
    for (int fir = 0; fir < n-i ; fir++)
    {
    cout<<n-fir-i;
    }
    cout<<endl;
}
}
