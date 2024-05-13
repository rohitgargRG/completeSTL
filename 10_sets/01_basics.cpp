#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b){
    return a>b;
}

int main(){
    // creating  a set
    set<int> s1 = {100,50,50,49,49,20,1};  
    // NOTE - it will store in sorted and non - repeating  order only. // 1 20 49 50 100

    set<string> s2;

    s2.insert("abc");
    s2.insert("efg");
    s2.insert("bac");

    // printing s1
    for(auto i: s1){
        cout<<i<<" ";   // 1 20 49 50 100
    }
    cout<<"\n";
    
    // printing s2
    for(auto i: s2){
        cout<<i<<" ";  // abc bac efg
    }
    cout<<"\n";

    // storing elements in descending order
    set<char,greater<char>> s3;

    s3.insert('a');
    s3.insert('f');
    s3.insert('f');
    s3.insert('t');
    s3.insert('b');

    for(auto i: s3){
        cout<<i<<" ";
    }
    cout<<"\n";

    // storing in descending order using comparator function
    set<int, bool(*)(int,int) > s4(comp);
    s4.insert(100);
    s4.insert(50);
    s4.insert(88);
    s4.insert(177);
    s4.insert(1000);

    for(auto i: s4){
        cout<<i<<" ";
    }
    cout<<"\n";
    


    return 0;
}