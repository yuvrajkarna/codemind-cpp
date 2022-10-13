#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n=s.size(),c=0;
    for(int i=0;i<n;i++){
        int x=s[i];
        if(x<=47 and x>32 || x<=64 and x>=58 || 
        x<=96 and x>=91 || x<=126 and x>=123) c++;
    }
    cout<<c;
    return 0;
}