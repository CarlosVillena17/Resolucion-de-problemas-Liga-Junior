#include<iostream>
using namespace std;

int main(){
long long int n,m;
cin>>n;
int b[n+1];
for(long long int i=0; i<=n; i++){
    b[i]=0;
}
for(long long int i=0; i<n; i++){
    cin>>m;
    b[m]++;
}

long long int mayor=0;
long long int indice;
bool empate=false;
for(long long int i=1; i<=n; i++){
    if(b[i]>mayor){
        mayor=b[i];
        indice=i;
    }
}
for(long long int i=1; i<=n; i++){
    if(indice!=i){
        if(b[i]==mayor){
            empate=true;
        }
    }
}
if(empate) cout<<"Nadie fue expulsado";
else cout<<"#"<<indice<<" fue expulsado";

return 0;
}