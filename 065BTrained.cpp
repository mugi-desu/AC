#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,cnt=0;
    cin >> N;
    vector<int> vec(N),vec2(N);
    for(int i=0;i<N;i++){
        cin >> vec.at(i);
    }
    vec2.at(0)=1;
    int i=0;
    while(1){
        i = vec.at(i)-1;
        cnt+=1;
        if(i==1){
            cout << cnt << endl;
            break;
        }
        vec2.at(i)+=1;
        if(vec2.at(i)==2){
            cout << -1 << endl;
            break;
        }
    }
}