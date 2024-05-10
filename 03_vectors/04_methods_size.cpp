#include<bits/stdc++.h>
using namespace std;
    
int main(){
    vector<int> v({1,2,3,4,5,6,7,8,9});
    vector<int> v1({1,2,3,4,5,6,7,8,9});
    vector<int> v2(100,100);

    // size of vector
    cout<<v.size()<<"\n";

    // checking max_size() of this vector
    cout<<v.max_size()<<"\n";
    cout<<v1.max_size()<<"\n";

    // checking capacity() 
    cout<<v2.capacity()<<"\n";

    //******************** resizing ***************************
    v.resize(5);
    cout<<v.size()<<"\n";
    cout<<v[7]<<"\n"; // this won't throw an error , instea it will print the value of v[7] in v before it was resized.
    // cout<<v.at(7)<<"\n"; // this will throw an out of range error

    /*
    reason - [] operator in c++ does not performs bound checking
           - at() operator in c++  performs bound checking
    */

   // ******************************************************************

   // check empty()
   cout<<v1.empty()<<"\n";

   // shrink_to_fit()

   v.shrink_to_fit();

   for(auto i = v.begin() ; i != v.end() ; i++){
    cout<<*i<<" ";
   }
    return 0;
}