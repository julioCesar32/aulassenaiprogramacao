#include <bits/stdc++.h>

using namespace std;

int main(){
    cout<<fixed<<setprecision(2);
    int bandeira;
    int km;
    float corrida;

    cout<<"Digite o numero da bandeira<1 ou 2>: ";
    cin>>bandeira;
    cout<<"Digite a kilometragem rodada: ";
    cin>>km;

    if(bandeira == 1){
        corrida = bandeira1 * 1.80;
        cout<<"Valor da corrida e: R$ "<< corrida<<endl;
    }else{
        corrida = bandeira2 * 1.30;
        cout<<"Valor da corrida e: R$ "<< corrida<<endl;
    }
}