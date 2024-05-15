#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // ********* binary search ************
    vector<int> v{11,22,33,44,55,66};
    cout<<binary_search(v.begin(),v.end(),44)<<endl;
    // ************************************

    // ********** lower_bound() ************
    vector<int> v1{10,20,30,40,50};
    vector<int> v2{10,15,20,20,30,40,50};
    vector<int> v3{10,30,40,50};
    int key  = 20;
    
    // case 1 - only one occurence of key

    cout<<lower_bound(v1.begin(),v1.end(),key) - v1.begin()<<"\n"; // 1

    // case 2 - multiple occurences of key present

    cout<<lower_bound(v2.begin(),v2.end(),key) - v2.begin()<<"\n"; // 2 (first occurence)

    // case 3 - no occurence of key

    cout<<lower_bound(v3.begin(),v3.end(),key) - v3.begin()<<"\n"; // 1 (just bigger than key) (30)


     // case 4 - key doesn't occur and all the elements on vector are less than key
    cout<<"lower : "<<lower_bound(v3.begin(),v3.end(),100) - v3.begin()<<"\n"; // 4

     // case 4 - key doesn't occur and all the elements on vector are greater than key
    cout<<lower_bound(v3.begin(),v3.end(),1) - v3.begin()<<"\n"; // 0
    // ***************************************************************************


    // ************** upper_bound() *****************************

    // case 1 - only one occurrence of key
    cout<<upper_bound(v1.begin(),v1.end(),key) - v1.begin()<<"\n";  //2

    // case 2 - multiple occurrences of key
    cout<<upper_bound(v2.begin(),v2.end(),key) - v2.begin()<<"\n"; // 4

    // case 3 - no occurrence of key
    cout<<upper_bound(v3.begin(),v3.end(),key) - v3.begin()<<"\n"; // 1

    // case 4 - key doesn't occur and all the elements on vector are less than key
    cout<<upper_bound(v3.begin(),v3.end(),100) - v3.begin()<<"\n"; // 4

     // case 4 - key doesn't occur and all the elements on vector are greater than key
    cout<<upper_bound(v3.begin(),v3.end(),1) - v3.begin()<<"\n"; // 0
    
    return 0;
}