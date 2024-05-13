#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // 1) make_pair() -- allows to create a value pair without writing the types explicitly. 
    pair<int,int> pair1;

    pair1 = make_pair(1,2);

    cout<<pair1.first<<" "<<pair1.second<<endl;

    // **************************************************

    // **********************************************************
      // NOTE - if pair is already initialised and we are using make_pair function with some new values for the same pair , then the updated value in make pair function will overwrite the previous assigned values.

      pair<int,int> pair2(100,99);

      pair2 = make_pair(10,20);  // these values will overwrite previous values

      cout<<pair2.first<<" "<<pair2.second<<endl;
    // **********************************************************

    // 2) swap() - 
    pair<char,char> p1('R','G');
    pair<char,char> p2('A','B');

    p1.swap(p2);  // the swap function will swap the pair1.first with pair2.first and pair1.second with pair2.second.

    cout<<p1.first<<" "<<p1.second<<"\n";
    cout<<p2.first<<" "<<p2.second<<"\n";
    // ***************************************************

    pair<int,char> p3(22,'F');
    pair<char,int> p4('G',33);

    return 0;
}