#include<bits/stdc++.h>
using namespace std;
    
int main(){

    //  ********** 1) creating a pair and assigning values ************
    
    // creating a pair
    pair<int,int> pair1;

    // assigning values to pair 
    pair1.first = 77;
    pair1.second = 100;

    // printing
    cout<<pair1.first<<endl;
    cout<<pair1.second<<endl;

    // ***************************************************************

    //  ********** 2) Initialize a pair ************

        // pair<char,string> pair1('R',"rohit");   // error
    pair<char,string> pair2('R',"rohit");

    cout<<pair2.first<<" "<<pair2.second<<endl;

    // ************************************************

    // *********** 3) Initialising pair using make_pair() *******
    
    pair<string,string> pair3;

    pair3 = make_pair("hello","world");
    cout<<pair3.first<<" "<<pair3.second<<endl;

    // *********************************************************

    // *********** 4) another syntak for declaration *******

    pair<int,char> pair5;

    pair5 = {1,'R'};
    cout<<pair5.first<<" "<<pair5.second<<endl;

    // *****************************************************

    // ********** IMPORTANT  - Default value ******** 
    pair<int,int> pair6;
    pair<char,int> pair7;
    pair<double,string> pair8;

    cout<<pair6.first<<" "<<pair6.second<<endl;  // 0 0
    cout<<pair7.first<<pair7.first<<" "<<pair7.second<<endl;  //   0
    cout<<pair8.first<<" "<<pair8.second<<endl;

    // default value for int,long,double,etc  is 0.

    return 0;
}