#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,cnt=0;
    cin >> N;
    vector<int> v(N);
    for(int i=0;i<N;i++){
        cin >> v.at(i);
    }
    for(int i=0;;i++){
        if(v.at(i)%2==0 && v.at(i)!=0){
            v.at(i)/=2;
        }
        else{
            break;
        }
        if(i==N-1){
            i=-1;
            cnt+=1;
        }
    }
    cout << cnt << endl;
    return 0;
}