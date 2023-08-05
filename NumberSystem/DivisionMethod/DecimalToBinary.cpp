#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n>0){
        int rem = n%2;
        ans = pow(10, i++)*rem + ans;
        n = n/2;
    }

    cout<< ans;
    return 0;
}