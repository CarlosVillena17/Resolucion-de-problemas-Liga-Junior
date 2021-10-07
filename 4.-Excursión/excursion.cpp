#include<iostream>
using namespace std;

int main(){
int n;
int c;
cin>>n>>c;
int num;
int a[n];
int respuestas[c];
for(int i=1; i<=n; i++){
    cin>>a[i];
 }
 for(int i=0; i<c; i++){
     cin>>num;
     respuestas[i]=a[num];
 }
for(int i=0; i<c; i++){
   cout<<respuestas[i]<<"\n";
 }
return 0;
}