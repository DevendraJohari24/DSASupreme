#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin>>n;

    for(int row=0; row<n; row++){
        int col=0;
        for(col=0; col<row+1; col=col+1){
            int ans = col+1;
            char ch = ans + 'A' -1;
            cout<<ch;
        }
        col = col - 1;

        for(; col>=1; col--){
            int ans = col;
            char ch = ans + 'A' -1;
            cout<<ch;
        }

        cout<<endl;
    }

    return 0;
}