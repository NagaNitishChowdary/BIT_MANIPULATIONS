// CHECK WHEATHER GIVEN NUMBER IS POWER OF 2 OR NOT IN O(1) TIME COMPLEXITY
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll coun=0;
    while(n!=0){
        if(n&1==1) coun++;
        n=n>>1;
    }
    cout<<coun<<endl;
}

int main() {
    int testCases;
    cin>>testCases;
    while(testCases--) solve();
}
