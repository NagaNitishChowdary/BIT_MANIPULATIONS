//GIVEN N,I SET THE Ith bit TO ONE
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve(){
    ll n,i;
    cin>>n>>i;
    ll m=1<<i;
    n=n|m;
    cout<<n<<endl;
}

int main() {
    int testCases;
    cin>>testCases;
    while(testCases--) solve();
}
