#include<bits/stdc++.h>
using namespace std;
    
int main(){
    stack<int> st;

    st.push(1); // 1
    st.push(2); // 1 2
    st.push(3); // 1 2 3
    st.push(4); // 1 2 3 4
    st.push(5); // 1 2 3 4 5
    // st.emplace(6); // 1 2 3 4 5 6

    st.pop(); // 1 2 3 4
    st.pop(); // 1 2 3

    cout<<st.size()<<"\n"; // 3
    cout<<st.empty()<<"\n"; // 0 or False
    cout<<st.top()<<"\n"; // 3

    // printing all elements
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    stack<int> st1,st2;
    st1.swap(st2);

    return 0;
}