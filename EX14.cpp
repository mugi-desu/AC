#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin >> a >> b >> c;
    d = max(max(a,b),max(b,c));
    e = min(min(a,b),min(b,c));
    cout << d-e << endl;
}