#include<bits/stdc++.h>
using namespace std;
    
int main(){
    
    //*************** Initialisation using a list ***************
    
    vector<int> vec1({1,2,3,4,5});

    for(auto i : vec1){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    // *********************************************************

    //*************** Initialisation using a single value ***************
    
    //  syntax - vector<datatype> name(size,value);
    vector<int> vec2(5,100);

    for(auto i : vec2){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    // ******************************************************************

    //**************** Initialization From Another Vector ***************
    //  syntax - vector<dataType> name(other_vec);    // copying one vector into another 

    vector<int> v1({10,20,30,40});
    vector<int> v2(v1); // copying v1 into v2

    for(auto i : v2){
        cout<<i<<" ";
    }
    cout<<"\n";
    //*******************************************************************
    return 0;
}