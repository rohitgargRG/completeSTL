#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // creating multimap
    multimap<int,int> mpp;

    // inserting elements
    mpp.insert(pair<int,int>(1,100));
    mpp.insert(pair<int,int>({2,200}));
    mpp.insert({3,300});
    mpp.insert({4,400});
    mpp.insert({4,600});
    mpp.insert({3,700});

    // printing elements
    multimap<int,int>::iterator it = mpp.begin();

    while(it != mpp.end()){
        cout<<it->first<<":"<<it->second<<"\n";
        it++;
    }
    cout<<endl;

    // assigning elements from mpp to mpp1
    multimap<int,int> mpp1(mpp.begin(),mpp.end());

    multimap<int,int>::iterator it1 = mpp1.begin();

    while(it1 != mpp1.end()){
        cout<<it1->first<<":"<<it1->second<<"\n";
        it1++;
    }
    cout<<endl;

    // deleting all elements till key 3 in mpp1
    multimap<int,int>::iterator it3 = mpp1.begin();

    mpp1.erase(mpp1.begin(),mpp1.upper_bound(3)); // exluding last
   

    auto it4 = mpp1.begin();

    while(it4 != mpp1.end()){
        cout<<it4->first<<" : "<<it4->second<<"\n";
        it4++;
    }
    cout<<endl;
    
    // count() 
    cout<<mpp.count(4)<<endl;

    // equal_range()
    auto eqp = mpp.equal_range(3);

    for(auto i = eqp.first ; i != eqp.second ; i++){
        cout<< i->second<<" ";
    }
    return 0;
}