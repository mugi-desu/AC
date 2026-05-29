#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n=0;
    while(n<str.size()){
        if(str.at(n)=='d'){
            for(int i=n+1;i<str.size();i++){
                if(i-n == 1){
                    if(str.at(i)!='r'){
                        cout << "NO" << endl;
                        return 0;
                    }
                }
                if(i-n == 2){
                    if(str.at(i)!='e'){
                        cout << "NO" << endl;
                        return 0;
                    }
                }
                if(i-n == 3){
                    if(str.at(i)!='a'){
                        cout << "NO" << endl;
                        return 0;
                    }
                }
                if(i-n == 4){
                    if(str.at(i)!='m'){
                        cout << "NO" << endl;
                        return 0;
                    }
                }
                if(i-n == 5){
                    if(str.at(i)!='e'){
                        break;
                    }
                }
                if(i-n == 6){
                    if(str.at(i)!='r'){
                        break;
                    }
                    if(i+1==str.size()){
                        n+=2;
                    }
                }
                if(i-n == 7){
                    if(str.at(i)=='e' || str.at(i)=='d'){
                        n+=2;
                    }
                    break;
                }
            }
            n+=5;
        }
        else if(str.at(n)=='e'){
            for(int i=n+1;i<str.size();i++){
                if(i-n == 1){
                    if(str.at(i)!='r'){
                        cout << "NO" << endl;
                        return 0;
                    }
                }
                if(i-n == 2){
                    if(str.at(i)!='a'){
                        cout << "NO" << endl;
                        return 0;
                    }
                }
                if(i-n == 3){
                    if(str.at(i)!='s'){
                        cout << "NO" << endl;
                        return 0;
                    }
                }
                if(i-n == 4){
                    if(str.at(i)!='e'){
                        cout << "NO" << endl;
                        return 0;
                    }
                }
                if(i-n == 5){
                    if(str.at(i)!='r'){
                        break;
                    }
                    if(i+1==str.size()){
                        n+=1;
                    }
                }
                if(i-n == 6){
                    if(str.at(i)=='e' || str.at(i)=='d'){
                        n+=1;
                    }
                    break;
                }
            }
            n+=5;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    if(n>str.size()){
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    return 0;
}