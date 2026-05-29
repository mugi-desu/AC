#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int t,x,y;
        cin >> t >> x >> y;
        if(x+y > t){
            cout << "No" << endl;
            return 0;
        }
        if(t%2 == 0){
            if((x+y)%2==1){
                cout << "No" << endl;
                return 0;
            }
            continue;
        }
        if((x+y)%2==0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}