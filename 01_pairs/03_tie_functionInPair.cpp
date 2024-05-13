#include<bits/stdc++.h>
using namespace std;
    
int main(){
    pair<int,int> pair1 = {1,2};
    int a,b;

    tie(a,b) = pair1; // value of pair1.first will be copied in a and value of pair1.second will be copied in b.

    cout<<a<<" "<<b<<"\n";
    cout<<pair1.first<<" "<<pair1.second<<" "<<"\n";

    pair<int,int> pair2 = {20,30};
    tie(a,ignore) = pair2;  // value of b will remain unaffected
    
    cout<<a<<" "<<b<<"\n";
    cout<<pair1.first<<" "<<pair1.second<<" "<<"\n";
    
    return 0;
}