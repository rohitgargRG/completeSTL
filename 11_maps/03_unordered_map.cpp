#include<bits/stdc++.h>
using namespace std;
    
int main(){
    
    // creation
    unordered_map<int,int> u;

    // inserting
    u[1] = 100;
    u[2] = 200;
    u[3] = 300;
    u[4] = 250;
    u[4] = 550;

    // printing
    for(auto i : u){
        cout<<i.first << " : "<<i.second<<"\n";
    }

    
    return 0;
}