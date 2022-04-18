#include <bits/stdc++.h>

using namespace std;

int main(){
    int soma = 0;
    int numero;
    cout<<"Digite o primeiro numero: ";
    cin>>numero;
    
    while(numero != 0){
        soma = numero + soma;
        cout<<"Digite outro numero: ";
        cin>>numero;
    }
    cout<<"SOMA = " << soma <<endl;
} 