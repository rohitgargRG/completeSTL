#include<bits/stdc++.h>
using namespace std;
    
int main(){
    vector<int> v1({1,2,3,4,5,6,7,8});

    //*************** using begin() and end() *********************
    for(auto i= v1.begin();i != v1.end();i++){
        cout<<*i<<" "; // i store address ,not the value
    }
    cout<<endl;
    // output - 1 2 3 4 5 6 7 8
    // ***********************************************************

    //**************** using rbegin() and rend() ******************
    for(auto i = v1.rbegin() ; i != v1.rend() ; i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    // output - 8 7 6 5 4 3 2 1
    // *************************************************************

//******************using cbegin() and cend() ******************
    
    /*
    
    auto i = v1.cbegin();
    *i = 100;
    
    this will give error , since cbegin() is constant iterator , we cannot modify value using this iterator
    */

   for(auto i = v1.cbegin() ; i != v1.cend() ;i ++){
        cout<< *i <<" ";
   }
   cout<<"\n";
// output - 1 2 3 4 5 6 7 8
// ***************************************************************

// ********************** using crbegin() and crend() ***************
    for(auto i = v1.crbegin() ; i != v1.crend() ; i++){
        cout<< *i << " ";
    }
    cout<<"\n";
// output - 8 7 6 5 4 3 2 1
// ******************************************************************


    return 0;
}