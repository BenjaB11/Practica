#include <iostream>
using namespace std;
void numerosFinitos(int x);
int main (){
    int y;
    int numero;
    cout<<"Ingrese su : ";
    cin>>y;

    for(int i=1;i<=y;i++){
        cout<<i*y<<endl;
    }

    return 0;
}