#include<bits/stdc++.h>
using namespace std;
    
int main(){
    vector<int> v{100,10,20,2,-1,66,44};

    // sort complete vector using STL
    sort(v.begin(),v.end());

    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
    // ***********************************

    // sort a range in vector 

    vector<int> v2{22,33,11,12,5,4,6};

    sort(v2.begin()+1,v2.begin()+3);  // 22 11 33 12 5 4 6  // excluding last index

    for(auto i : v2){
        cout<<i<<" ";
    }
    cout<<"\n";

    // *****************************************************

    // ******* sort the vector in descending order ***********

    sort(v.begin(),v.end(),greater<>());

    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";

    // ***************************************

    return 0;
}