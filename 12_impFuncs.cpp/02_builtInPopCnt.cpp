#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int num = 32;

    int noofOnes = __builtin_popcount(num);

    cout<<noofOnes<<endl; // 1

    long long n = 323242444434;

    int ans = __builtin_popcountll(n);
    cout<<ans<<"\n";
    return 0;
}