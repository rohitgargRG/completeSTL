#include<bits/stdc++.h>
using namespace std;
    
int main(){
    pair<int,pair<char,string>> pair1;

    pair1.first = 1;
    pair1.second = {'A',"abc"};

    pair1.second = make_pair('R',"rohit");

    pair1.second.first = 'O';
    pair1.second.second = "OPEN";

    cout<<pair1.first<<" "<<pair1.second.first<<" "<<pair1.second.second<<"\n";

    return 0;
}