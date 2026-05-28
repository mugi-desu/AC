#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> vec(N),v(2);
    for(int i=0;i<M;i++){
        cin >> v.at(0) >> v.at(1);
        vec.at(v.at(0)-1)+=1;
        vec.at(v.at(1)-1)+=1;
    }
    for(int i=0;i<N;i++){
        cout << vec.at(i) << endl;
    }
}