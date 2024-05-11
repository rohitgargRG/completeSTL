#include<bits/stdc++.h>
using namespace std;
    
int main(){
    list<char> l{'a','b','c','d','e','f','g'};

    // front()
    cout<<l.front()<<"\n"; // a

    // back()
    cout<<l.back()<<"\n"; // g

    //push_front()
    l.push_front('A');
    cout<<l.front()<<"\n";  // A 

    //push_back()
    l.push_back('B');
    cout<<l.back()<<"\n";   // B

    // pop_front()
    l.pop_front();
    cout<<l.front()<<"\n"; // a

    // pop_back()
    l.pop_back();
    cout<<l.back()<<"\n"; // g

    // insert()
    list<char>:: iterator it = l.begin();
    advance(it,2); // pointing to 3rd posn , 2nd index
    l.insert(it,'Z');

    for(list<char>:: iterator i = l.begin() ; i != l.end() ; i++){
        cout<<*i<<" ";
    }
    cout<<"\n";

    // size()
    cout<<l.size()<<"\n";

    
    return 0;
}