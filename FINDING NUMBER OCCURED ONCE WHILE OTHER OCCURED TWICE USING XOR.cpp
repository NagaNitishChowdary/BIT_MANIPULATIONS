//FIND NUBMER WHICH APPEARS ONLY ONCE AND REMAINING ALL APPEARS TWICE IN ARRAY
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve(){
    ll n;
    cin>>n;
    int arr[n];
    //ll xor=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        //xor=xor^arr[i];
        }
    ll xo=0;
    for(ll i=0;i<n;i++) xo=xo^arr[i];
    cout<<xo<<endl;
}

int main() {
    int testCases;
    cin>>testCases;
    while(testCases--) solve();
}
