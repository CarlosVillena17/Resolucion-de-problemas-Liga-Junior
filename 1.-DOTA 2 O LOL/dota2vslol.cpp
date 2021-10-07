#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
string nombre;
int cantDota=0;
int cantLol=0;
for(int i=0;i<n; i++){
    cin>>nombre;
    if(nombre=="DOTA"){
        cantDota++;
    }else if(nombre=="LOL"){
        cantLol++;
    }
}
cout<<"DOTA: "<<cantDota<<"\n";
cout<<"LOL: "<<cantLol<<"\n";

return 0;
}
