#include<bits/stdc++.h>
using namespace std;
    
int main(){
    vector<int> v{200,150,125,500,100};
    
    int minAns = *min_element(v.begin(),v.end());
    
    // or

    int arr[] = {200,300,100};
    int* i;
    i = min_element(arr,arr+5);

    cout<<minAns<<"\n";  // 100
    cout<<*i<<"\n";  // 100

    // finding min element in a particular range

    int ans = *min_element(v.begin()+1,v.begin()+3);
    cout<<ans<<"\n";

    // max element
    int maxans = *max_element(v.begin(),v.end()); // 500

    cout<<maxans<<"\n";

    // finding maxans in a particular range
    int ansRange = *max_element(v.begin()+2,v.begin()+4);
    cout<<ansRange<<"\n"; //500
    return 0;
}