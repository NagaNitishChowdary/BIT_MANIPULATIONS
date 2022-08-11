// CHECK WHEATHER GIVEN NUMBER IS POWER OF 2 OR NOT IN O(1) TIME COMPLEXITY
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve(){
    ll n;
    cin>>n;
    if((n&(n-1))==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    int testCases;
    cin>>testCases;
    while(testCases--) solve();
}
