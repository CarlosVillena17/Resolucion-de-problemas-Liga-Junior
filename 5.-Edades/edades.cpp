#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int cantidad;
int a[40]={0};
for(int i=0; i<n; i++){
    cin>>cantidad;
    a[cantidad]++;
}
for(int i=0; i<40; i++){
    if(a[i]!=0){
        cout<<i<<" "<<a[i]<<"\n";
    }
}


return 0;
}