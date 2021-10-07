#include <bits/stdc++.h>

using namespace std;

struct rodillo {            
    int x,y,rad;
};

rodillo Rodillos[1100];        
int n;      
int anterior,actual;     

void leer(){        
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>Rodillos[i].x>>Rodillos[i].y>>Rodillos[i].rad;
        if((Rodillos[i].x == 0)&&(Rodillos[i].y == 0)) actual = i; //Guardamos la posición del rodillo origen
    }
}

bool Estan_conectados(rodillo A, rodillo B){  //Declaramos una función que calcula si los rodillos están conectados
    if(sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y)) == A.rad + B.rad ) return true;
    return false;
}

void resp(){    
    int visitados=1;    
    while(visitados<n){     
        for(int i=1;i<=n;i++){  
            
            if(Estan_conectados(Rodillos[actual],Rodillos[i])&& (anterior!=i)){
                anterior = actual;  
                actual = i;    
                visitados++;    
                break;          
            }
        }
    }
    cout<<Rodillos[actual].x<<" "<<Rodillos[actual].y;  

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    leer();    
    resp();

    return 0;
}