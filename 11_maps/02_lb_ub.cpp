#include<bits/stdc++.h>
using namespace std;
    
int main(){
    map<int,int> mpp;

    mpp[1] = 100;
    mpp.insert(pair<int,int>(2,200));
    mpp.insert({3,300});
    mpp.insert(pair<int,int>({4,400}));
    mpp[6] = 600;

    // lower_bound()
    map<int,int>::iterator it = mpp.lower_bound(3);
    cout<<(*it).first<<" : "<<(*it).second<<"\n";  // 3  300

    it = mpp.lower_bound(5);
    cout<<(*it).first<<" : "<<(*it).second<<"\n"; // 6 600

    it = mpp.lower_bound(7);
    cout<<(*it).first<<" : "<<(*it).second<<"\n"; // returns mpp.end()

    // upper_bound()
    map<int,int>::iterator it1 = mpp.upper_bound(3);
    cout<<(*it1).first<<" : "<<(*it1).second<<"\n"; // 4 400

    it1 = mpp.upper_bound(5);
    cout<<(*it1).first<<" : "<<(*it1).second<<"\n";  // 6 600

    it1 = mpp.upper_bound(7);
    cout<<(*it1).first<<":"<<(*it1).second<<"\n";  // returns mpp.end()

    //***************************************
    return 0;
}