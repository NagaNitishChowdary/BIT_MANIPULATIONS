//GIVEN N NUMBERS AND 2 OF THEM ARE GIVEN ONCE FIND THEM USING XOR
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
#define eb emplace_back
#define nline "\n"
using namespace std;

void solve(){
    ll n;
    cin>>n;
    int arr[n];
    ll xo=0;
    for(ll i=0;i<n;i++){cin>>arr[i];xo^=arr[i];}
    ll i=0;
    while(xo){
        //i++;
        if(xo&1) break;
        xo=xo>>1;
        i++;
    }
    ll xor1=0;
    ll xor2=0;
    for(ll j=0;j<n;j++){
        if((arr[j]&(1<<i))) xor1^=arr[j];
        else xor2^=arr[j];
    }
    cout<<xor1<<" "<<xor2<<nline;
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

/*
//GIVEN N NUMBERS AND 2 OF THEM ARE GIVEN ONCE FIND THEM USING MAP(STL)
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
*/
