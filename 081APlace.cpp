#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b=0;
    cin >> a;
    b+=a/100 + (a/10)%10 + (a%100)%10;
    cout << b << endl;
}