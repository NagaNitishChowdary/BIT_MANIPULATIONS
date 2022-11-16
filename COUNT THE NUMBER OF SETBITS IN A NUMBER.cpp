// COUNT THE NO OF SET BITS IN THE NUMBER

#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve1(int n){
    ll coun=0;
    while(n!=0){
        if(n&1==1) coun++;
        n=n>>1;
    }
    cout<<coun<<endl;
}

void solve2(int n){
    cout << __builtin_popcount(n) << endl;
}

int main() {
    int n ;
    cin >> n ;
    solve1(n);
    solve2(n); 
}
