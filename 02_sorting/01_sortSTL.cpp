#include<bits/stdc++.h>
using namespace std;
    
int main(){
    vector<int> v{100,10,20,2,-1,66,44};

    sort(v.begin(),v.end());

    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}