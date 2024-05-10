#include<bits/stdc++.h>
using namespace std;
    
int main(){
    vector<int> v{1,2,3,4,5,6,7};


    //******************* assign()***********
    vector<int> v1;
    v1.assign(10,100);

    for(auto i : v1){
        cout<<i<<" ";       // 100 100 100 100 100 100 100 100 100 100
    }
    cout<<"\n";

    // modifying the elements
    v1.assign(v.begin(),v.begin()+2);

    for(auto i : v1){
        cout<<i<<" ";       // 1 2
    }
    cout<<"\n";
    
    // ***********************************************

    //******************* push_back() and pop_back() ************ 

    vector<int> v2;

    v2.push_back(1); // 1
    v2.push_back(2); // 1 2
    v2.push_back(3); // 1 2 3

    v2.pop_back(); // 1 2
    v2.pop_back(); // 1

    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    // *******************************************

    // ****************** insert *******************************

    vector<int> v3{1,2,3,4,5};

    // inserting a single element at a posn
    v3.insert(v3.begin()+2,100); // 1 2 100 3 4 5
    
    for(auto i : v3){
        cout<<i<<" ";
    }
    cout<<"\n";

    // inserting a single element at a posn multiple times
    v3.insert(v3.begin()+1,3,1000); // 1 1000 1000 1000 2 100 3 4 5

     for(auto i : v3){
        cout<<i<<" ";
    }
    cout<<"\n";

    // inserting a range 
    vector<int> temp(5,500);

    v3.insert(v3.begin()+7,temp.begin()+1,temp.end() - 1); // 1 1000 1000 1000 2 100 3 500 500 500 4 5
    
    for(auto i : v3){
        cout<<i<<" ";
    }
    cout<<"\n";

    // *******************************************************************

    // *********************** erase() *****************************

    // erasing from a posn
    v3.erase(v3.begin()+3); // 1 1000 1000 2 100 3 500 500 500 4 5

    for(auto i : v3){    // 1 1000 1000 2 100 3 500 500 500 4 5
        cout<<i<<" ";
    }
    cout<<"\n";  


    // erasing a a range
    v3.erase(v3.begin()+4,v3.begin()+6); // 1 1000 1000 2 500 500 500 4 5

    for(auto i : v3){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    // *********************************************************

    // ********************* Swap **********************
    vector<int> v5{1,2,3,7,8};
    vector<int> v6{100,200,300};

    v5.swap(v6);  // data type must be same of both vectors

    for(auto i : v5){
        cout<<i<<" ";
    }
    cout<<"\n";

    for(auto i : v6){
        cout<<i<<" ";
    }
    cout<<"\n";

    // *****************************************************

    // ************* clear ******************

    v5.clear();

    for(auto i : v5){
        cout<<i<<" ";
    }
    cout<<"\n";

    // ***************************************

    
    return 0;
}