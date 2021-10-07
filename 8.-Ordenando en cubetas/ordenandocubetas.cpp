#include<iostream>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
int a[n];
int b[m];
for(int i=0; i<=m; i++){
    b[i]=0;
}
for(int i=0; i<n; i++){
    cin>>a[i];
    b[a[i]]++;
}

for(int i=1; i<=m; i++){
    cout<<i<<": "<<b[i]<<endl;
}

return 0;
}