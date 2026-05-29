#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,sum=0;
    cin >> n >> a >> b;
    for(int i=1;i<=n;i++){
        int w=0,j=i;
        while(1){
            w += j%10;
            j /= 10;
            if(j==0)
                break;
        }
        if(w >= a && w <= b)
            sum+=i;
    }
    cout << sum << endl;
}