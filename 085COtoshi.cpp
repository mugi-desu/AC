#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,y;
    cin >> n >> y;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            for(int k=0;k<=n-i-j;k++){
                if(1000*k + 5000*j + 10000*i == y){
                    cout << i << " " << j << " " << k << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
}