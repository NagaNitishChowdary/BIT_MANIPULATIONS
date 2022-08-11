//GIVEN N PRINT XOR OF ALL NUMBERS FROM GIVEN RANGE L TO R
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int xo(int n)
{
    if(n%4==0) return n;
    else if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    else if(n%4==3) return 0;
    return 0;
}

int solve(){
    int l,r;
    cin>>l>>r;
    r=xo(r);
    l=xo(l-1);
    cout<<(r^l)<<endl;
    return 0;
}

int main() {
    int testCases;
    cin>>testCases;
    while(testCases--) solve();
}
