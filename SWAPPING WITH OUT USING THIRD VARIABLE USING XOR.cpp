//SWAPPING TWO NUMBERS WITH OUT USING THIRD VARIABLE USING XOR
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve(){
    ll m,n;
    cin>>m>>n;
    m=m^n;
    n=m^n;
    m=m^n;
    cout<<m<<" "<<n<<endl;
}

int main() {
    int testCases;
    cin>>testCases;
    while(testCases--) solve();
}
