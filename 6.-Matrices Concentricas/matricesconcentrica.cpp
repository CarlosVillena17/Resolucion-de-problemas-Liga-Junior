#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int v=0;
int a[n][n];
int b[n][n];

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>b[i][j];
    }
}

for(int i=0; i<n; i++){
    for(int j=i; j<n-i; j++){
        a[i][j]=v;
        a[n-i-1][j]=v;
        a[j][i]=v;
        a[j][n-i-1]=v;
    }
    v++;
}
bool concentrica=true;

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(a[i][j]==b[i][j]){
            continue;
        }else{
            concentrica=false;
        }
    }
}
if(concentrica){
    cout<<"1";
}else{
    cout<<"0";
}

return 0;
}