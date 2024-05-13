#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
    return a>b;
}

int main(){
    multiset<int> ms;   // by default ascending order 

    // insert
    ms.insert(1);
    ms.insert(5);
    ms.insert(50);
    ms.insert(50);
    ms.insert(25);
    ms.insert(25);
    ms.insert(10);

    // size()
    cout<<ms.size()<<"\n"; // 7

    if(!ms.empty()){
        for(auto i : ms){
            cout<<i<<" ";
        }
    }
    cout<<"\n";

    // clear()
    ms.clear();

    cout<<ms.size()<<"\n"; // 0

    // multiset in descending order 

    multiset<int,greater<int>> ms1;

    // OR

    multiset<int,bool(*)(int,int)> ms2(comp);

    ms1.insert(100);
    ms1.insert(150);
    ms1.insert(125);
    ms1.insert(135);
    ms1.insert(200);
    ms1.insert(250);
    ms1.insert(50);

    ms2.insert(1000);
    ms2.insert(200);
    ms2.insert(200);
    ms2.insert(700);
    ms2.insert(700);

    // before swapping
    for(auto i : ms1){
        cout<<i<<" ";
    }
    cout<<endl;
    
    for(auto i : ms2){
        cout<<i<<" ";
    }
    cout<<endl;

    multiset<int,greater<int> >::iterator it = ms1.lower_bound(135);

    cout<<*it<<"\n"; // 135

    it = ms1.lower_bound(175);
    cout<<*it<<"\n"; // 150

    // erase()

    ms2.erase(ms2.find(200));  // Remove only one instance of element from multiset having same value 200

    ms2.erase(700);  // remove all occurences of 700

    for(auto i: ms2){
        cout<<i<<" ";
    }

    return 0;
}