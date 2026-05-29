#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,a=0,b=0,c=0;
    cin >> N;
    for(int i=0;i<N;i++){
        int t,x,y,p,q;
        cin >> t >> x >> y;
        p=x;
        q=y;
        if(x<b){
            swap(x,b);
        }
        if(y<c){
            swap(y,c);
        }
        if(x-b+y-c > t-a){
            cout << "No" << endl;
            return 0;
        }
        if((t-a)%2 == 0){
            if((x-b+y-c)%2==1){
                cout << "No" << endl;
                return 0;
            }
            a=t;
            b=p;
            c=q;
            continue;
        }
        if((x-b+y-c)%2==0){
            cout << "No" << endl;
            return 0;
        }
        a=t;
        b=p;
        c=q;
    }
    cout << "Yes" << endl;
}