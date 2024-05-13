#include<bits/stdc++.h>
using namespace std;
    
int main(){
    unordered_set<int> st;

    st.insert(100);
    st.insert(150);
    st.insert(120);
    st.insert(140);
    st.insert(500);

    // size()
    cout<<st.size()<<"\n";

    // empty()
    cout<<st.empty()<<"\n";

    // find()
    unordered_set<int>:: iterator it;
    it = st.find(140);
    cout<<*it<<"\n";

    for(auto i: st){
        cout<<i<<" ";
    }
    return 0;
}