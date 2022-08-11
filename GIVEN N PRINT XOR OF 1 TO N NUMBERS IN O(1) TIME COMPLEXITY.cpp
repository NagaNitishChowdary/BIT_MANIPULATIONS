//GIVEN N PRINT XOR OF ALL NUMBERS FROM 1 TO N
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve(){
    ll n;
    cin>>n;
    if(n%4==0) cout<<n<<endl;
    else if(n%4==1) cout<<1<<endl;
    else if(n%4==2) cout<<n+1<<endl;
    else if(n%4==3) cout<<0<<endl;
}

int main() {
    int testCases;
    cin>>testCases;
    while(testCases--) solve();
}
