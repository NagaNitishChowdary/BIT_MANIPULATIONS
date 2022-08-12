//GIVEN N NUMBERS AND 2 OF THEM ARE GIVEN ONCE FIND THEM
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
#define eb emplace_back
#define nline "\n"
using namespace std;

void solve(){
    ll n;
    cin>>n;
    map<int,int>mpp;
    for(ll i=0;i<n;i++){
        ll m;
        cin>>m;
        mpp[m]++;
    }
    for(auto it:mpp){
        if(it.second==1) cout<<it.first<<" ";
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testCases;
    cin>>testCases;
    while(testCases--){
        solve();
    }
}
