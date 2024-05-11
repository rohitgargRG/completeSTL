#include<bits/stdc++.h>
using namespace std;
    
int main(){
    priority_queue<int,vector<int>,greater<int> > pq;  // for  in heap
    priority_queue<int> p;   // max heap

    pq.push(100);
    pq.push(10);
    pq.push(20);
    pq.push(15);
    pq.push(500);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}