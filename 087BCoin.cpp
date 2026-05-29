#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,x,cnt=0;
    cin >> a >> b >> c >> x;
    for(int i=0;i<=c;i++){
        for(int j=0;j<=b;j++){
            for(int k=0;k<=a;k++){
                if(500 * k + 100 * j + 50 * i == x){
                    cnt+=1;
                }
            }
        }
    }
    cout << cnt << endl;
}