#include<bits/stdc++.h>
using namespace std;

// comparator function examples

// 1) sorting in ascending order
bool comp1(int a,int b){
    return a<b;
}

// 2) sort by absolute value in ascending order
bool comp2(int a , int b){
    return abs(a) < abs(b);
}

// 3) sort by string length in ascending order
bool comp3(string s1,string s2){
    return s1.length() < s2.length();
}

// 4) sort by string length in descending order
bool comp4(string s1,string s2){
    return s1.length() > s2.length();
}

// *******************************************
//  sorting in descending order
bool comp(int p1,int p2){
    return p1>p2;
}

int main(){
    vector<int> v{100,10,50,30,40,11};

    // now we want to sort the given vector in descending order or any other given order
    // for this we will use a comparator function

    // ******  sort in descending order *********
    sort(v.begin(),v.end(),comp);

    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
    // *************************************

    // sort acc to string length
    vector<string> vs{"abcde","abc","ab","abcd"};

    sort(vs.begin(),vs.end(),comp3);

    for(auto i : vs){
        cout<<i<<" ";
    }
    cout<<"\n";

    //****************************************
    
    
    return 0;
}