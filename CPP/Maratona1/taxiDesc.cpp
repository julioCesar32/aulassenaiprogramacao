#include <bits/stdc++.h>

using namespace std;

int main(){
    cout<<fixed<<setprecision(2);
    cout<<"ATENÇÃO: Taxa minima do taxi: R$3.50"<<endl;
    int bandeira;
    int km;
    float corrida;
    char quer;

    cout<<"Digite o numero da bandeira<1 ou 2>: ";
    cin>>bandeira;
    cout<<"O taxi oferece desconto de 30%"<<endl;
    cin>> quer;
    cout<<"Digite a kilometragem rodada: ";
    cin>>km;

    if(quer == 'S'){
        if(bandeira == 1){
            corrida = km * 1.80;
            corrida = (corrida * 70) / 100;
            corrida = corrida + 3.50;
            cout<<"Valor da corrida e: R$ "<< corrida<<endl;
        }
        if(bandeira == 2){
            corrida = km * 2.30 + 3.50;
            corrida = (corrida * 70) / 100;
            corrida = corrida + 3.50;
            cout<<"Valor da corrida e: R$ "<< corrida<<endl;
        }
    }
    else if(km <= 1){
        cout<<"valor da corrida: R$3.50";

    }else if(km > 1){
        if(bandeira == 1){
            corrida = km * 1.80 + 3.50;
            cout<<"Valor da corrida e: R$ "<< corrida<<endl;
        }
        if(bandeira == 2){
            corrida = km * 2.30 + 3.50;
            cout<<"Valor da corrida e: R$ "<< corrida<<endl;
        }
    }
}