#include<bits/stdc++.h>
using namespace std;
    
int main(){
    queue<int> q;

    q.push(10); // 10
    q.push(20); // 10 20
    q.push(30); // 10 20 30
    q.push(40); // 10 20 30 40
    // q.emplace(50);  // 10 20 30 40 50
    cout<<q.size()<<"\n";

    q.pop();  // 20 30 40
    q.pop(); // 30 40

    cout<<q.size()<<"\n";

    cout<<q.front()<<"\n";  // 30

    cout<<q.back()<<"\n"; // 40

    cout<<q.empty()<<"\n";

    // swap()

    queue<int> q1,q2;

    q1 = q; // copying q into q1
    q2 = q;

    q2.pop();
    cout<<q1.front()<<"\n";
    cout<<q2.front()<<"\n";

    q1.swap(q2);

    cout<<q1.front()<<"\n";
    cout<<q2.front()<<"\n";
    return 0;
}