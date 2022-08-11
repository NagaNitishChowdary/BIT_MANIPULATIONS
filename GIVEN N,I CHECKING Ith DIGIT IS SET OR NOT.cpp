//GIVEN N,I CHECK IF Ith BIT IS SET OR NOT
// THAT IS CHECKING Ith bit is 1 OR NOT BY USING DUMMY ELEMENT
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve(){
    ll n,i;
    cin>>n>>i;
    //ll mask=pow(2,i);
    // OR THE MASK BE 1 LEFT SHIFT OF I
    ll mask=1<<i;
    if((n&mask)!=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main() {
    int testCases;
    cin>>testCases;
    while(testCases--) solve();
}
