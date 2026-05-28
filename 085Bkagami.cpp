#include <bits/stdc++.h>
using namespace std;

int main(){
    int X=1,N,w;
    cin >> N;
    vector<int> moti(N);
    for(int i=0;i<N;i++){
        cin >> moti.at(i);
    }
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(moti.at(i)<moti.at(j)){
                w=moti.at(i);
                moti.at(i)=moti.at(j);
                moti.at(j)=w;
            }
        }
    }
    w=moti.at(0);
    for(int i=0;i<N;i++){
        if(moti.at(i)<w){
            w=moti.at(i);
            X+=1;
        }
    }
    cout << X << endl;
}