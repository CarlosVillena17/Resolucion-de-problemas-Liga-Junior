#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0); cin.tie(0);
int n;
cin>>n;
int suma[n/2];
int num[n];
for(int i=0; i<n; i++){
    cin>>num[i];
}
for(int i=0; i<n/2; i++){
    suma[i]=num[i]+num[n-1-i];
}
for(int i=0; i<n/2; i++){
    cout<<suma[i]<<" ";
}

return 0;
}