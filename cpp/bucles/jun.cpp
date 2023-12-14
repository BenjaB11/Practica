#include <iostream>

using namespace std;

int main(){
    
    int x, y, resultado;

    cout<<"Ingrese su numero ";
    cin>>x;
    cout<<"Ingrese su otro numero ";
    cin>>y;

    resultado=x + y;

    if(resultado>10){
        cout<<"Ella te ama";
    }else{
        cout<<"Ella no te ama";
    }

    return 0;
}