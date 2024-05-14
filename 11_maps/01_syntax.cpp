#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // declaration ******************************
    map<string,int> mpp;

    // inserting key value pairs
    mpp["one"] = 1;   // key = one , value = 1
    mpp["two"] = 2;   // key = two , value = 2
    mpp["three"] = 3; // key = three , value = 3
    mpp["four"] = 4;   // key = four , value = 4

    // iterating and printing
    map<string,int>::iterator it;

    for(it = mpp.begin() ; it != mpp.end() ; it++){
        cout<<it -> first <<" : "<<it->second<<"\n";
    }
    // elements are sorted according to key values.
    // ********************************************************

    // size() - Time complexity: O(1).  ******************************************
    map<int,int> m1;

    m1[1] = 1;
    m1[2] = 2;
    m1[3] = 3;
    m1[5] = 5;
    m1[4] = 4;

    auto i = m1.begin();

    while(i != m1.end()){
        cout<<i->first<<" : "<<i->second<<"\n";
        i++;
    }

    cout<<m1.size()<<"\n";
    // ****************************************************************

    // using pair to pass key , value || using insert() function

    map<int,int> m2;

    m2.insert(pair<int,int>({1,100}));
    m2.insert({2,200});
    // all above syntax are valid
    m2.insert(pair<int,int>(4,400));
    m2[5] = 500;

    // using iterator to print
    cout<<endl;

    auto it2 = m2.begin();

    while(it2 != m2.end()){
        cout<<it2->first<<" : "<<it2->second<<"\n";
        it2++;
    }
    cout<<endl;

    // assigning value of m2 to new map m3

    map<int,int> m3(m2.begin(),m2.end());  // copying value from a map into another

    map<int,int>::iterator it3 = m3.begin();

    while(it3 != m3.end()){
        cout<<it3->first<<" : "<<it3->second<<"\n";
        it3++;
    }
    cout<<endl;


    // erase()

    // remove element with key 4 from m3
    m3.erase(4);
    auto it4 = m3.begin();
    while(it4 != m3.end()){
        cout<<it4->first<<" : "<<it4->second<<"\n";
        it4++;
    }
    cout<<endl;

    // erasing using iterator
    auto it5 = m3.find(2);
    m3.erase(it5);

    it5 = m3.begin();
    while(it5 != m3.end()){
        cout<<it5->first<<" : "<<it5->second<<"\n";
        it5++;
    }
    cout<<endl;

    //
    return 0;
}