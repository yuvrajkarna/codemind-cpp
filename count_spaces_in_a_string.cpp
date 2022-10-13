#include<iostream>
using namespace std;

int main(){
    string st;
    getline(cin,st);
    
    int n=st.size(),c=0;
    for(int i=0;i<n;i++){
        if(st[i]==' '){
            c+=1;
        }
    }
    cout<<c<<endl;
    return 0;
}