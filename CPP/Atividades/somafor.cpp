#include <bits/stdc++.h>

using namespace std;

int main(){

    int soma = 0;
    int numero;
    int quantidade;
    int i = 1;

    cout<<"Quantos numeros serão somados? "<<endl;
    cin >> quantidade;

    /*for(int i = 1; i <= quantidade; i++){
        cout<<"Digite outro numero: "<<endl;
        cin>>numero;
        soma = numero + soma;
    
    }*/

    while(i <= quantidade){
        cout<<"Digite outro numero: "<<endl;
        cin >> numero;
        soma = numero + soma;
        i++;
    }

    cout << "SOMA = " << soma << endl;
}