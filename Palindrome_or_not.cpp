#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    
    int n=s.size(),st=0,e=n-1,f=0;
    while(st<e){
        if(tolower(s[st++])!=tolower(s[e--])) {
            cout<<"False"; f=1;
            break;
            
        }
    }if(f==0)
    cout<<"True";
    return 0;
}