#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n=s.size(),c=0;
    for(int i=0;i<n;i++){
        int x=s[i];
        if(x<=122 and x>=97) c++;
    }
    cout<<c;
    return 0;
}