#include<bits/stdc++.h>
using namespace std;
    
int main(){
    set<int> st;

    // insert()
    st.insert(100);
    st.insert(50);
    st.insert(150);
    st.insert(110);
    st.insert(1000);

    //size()
    cout<<st.size()<<"\n";  // 5

    //max_size()
    cout<<st.max_size()<<"\n"; 

    //empty()
    cout<<st.empty()<<"\n"; // 0

    //begin()
    auto i =  st.begin();
    cout<<*i<<"\n";  //50

    //end()
    auto i1 = st.end();
    i1--;
    cout<<(*i1)<<"\n";  // 1000

    // printing all elements
    for(auto i : st){
        cout<<i<<" ";
    }
    cout<<"\n";

    // assigning the elements form st to s1
    set<int,greater<int>> s1(st.begin(),st.end());

    set<int,greater<int>>:: iterator itr;

    // printing s1
    for(itr = s1.begin() ; itr != s1.end() ; itr++){
        cout<<*itr<<" ";
    }
    cout<<"\n";

    // find()

    set<int,greater<int>>:: iterator itr1;
    itr1 = s1.find(100);  // position where 100 is present

    // count(ele)

    cout<<s1.count(100) << " " << s1.count(5000)<<"\n";  // 1 0

    // lower_bound(ele)
    set<int>:: iterator it;
    it = st.lower_bound(100);
    cout<<*it<<"\n";  // 100

    it = st.lower_bound(120);
    cout<<*it<<"\n"; // 150  (next higher)

    it = st.lower_bound(10000);
    cout<<*it<<"\n";   // returns st.end()

    // upper_bound(ele)
    set<int>:: iterator it1;

    it1 = st.upper_bound(100);
    cout<<*it1<<"\n";  // 110

    
    it1 = st.upper_bound(120);
    cout<<*it1<<"\n";  // 150

    
    it1 = st.upper_bound(10000);
    cout<<*it1<<"\n";  // returns st.end()

    return 0;
}