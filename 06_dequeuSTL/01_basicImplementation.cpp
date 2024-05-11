#include<bits/stdc++.h>
using namespace std;
    
int main(){
    deque<int> dq;

    dq.push_back(10); // 10
    dq.push_back(20); // 10 20
    dq.push_back(30); // 10 20 30

    dq.push_front(100); // 100 10 20 30
    dq.push_front(200); // 200 100 10 20 30

    for(auto i : dq){
        cout<<i<<" ";
    }
    cout<<"\n";

    dq.pop_back(); // 200 100 10 20
    dq.pop_front(); // 100 10 20

    // size()
    cout<<dq.size()<<"\n";

    // sort()
    sort(dq.begin(),dq.end());
    
    for(auto i : dq){
        cout<<i<<" ";
    }
    cout<<"\n";

    // accessing elements
    cout<<dq[0]<<" "<<dq.at(1)<<"\n";

    //empty()
    cout<<dq.empty()<<"\n";

    // front() , back()
    cout<<dq.front()<<" "<<dq.back()<<"\n";

    
    return 0;
}