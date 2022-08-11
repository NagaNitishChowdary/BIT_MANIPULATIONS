//GIVEN N PRINT XOR OF ALL NUMBERS FROM GIVEN RANGE L TO R
//IT TAKES LESS TIME COMPLEXITY THAN N%2==0
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve(){
    ll n;
    cin>>n;
    if((n&1)==0) cout<<"even"<<endl;
    else cout<<"odd"<<endl;
}

int main() {
    int testCases;
    cin>>testCases;
    while(testCases--) solve();
}
