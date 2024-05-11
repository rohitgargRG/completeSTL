#include<bits/stdc++.h>
using namespace std;
    
int main(){
    vector<int> v({1,2,3,4,5,6,7});

    // accessing using []
    cout<<v[2]<<" "<<v[5]<<"\n";
    cout<<v[9]<<"\n";   // 0
    // NOTE - [] does not performs bound checking


    //accessing using at(index)
    cout<<v.at(2)<<" "<<v.at(5)<<"\n";
    //cout<<v.at(9)<<"\n";  // gives out of range error
    // at() this performs bound checking

    // front() and back()
    cout<<v.front()<<" "<<v.back()<<"\n";
    return 0;
}