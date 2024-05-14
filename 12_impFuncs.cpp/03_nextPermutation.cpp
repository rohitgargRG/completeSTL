#include<bits/stdc++.h>
using namespace std;
    
int main(){
    string s = "33535";

    sort(s.begin(),s.end());

    do{
        cout<<s<<"\n";
    }while(next_permutation(s.begin(),s.end()));
    return 0;
}