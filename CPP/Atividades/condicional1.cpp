#include <bits/stdc++.h>

using namespace std;

int main(){

    int hora;
    int horainvalida = 0;

    cout << "Digite uma hora do dia: " << endl;
    cin >> hora;

    if(hora<12){
        cout<<"Bom dia!"<<endl;
        horainvalida = 1;
    }
    else if(hora >= 12 && hora < 18){
        cout<<"Boa tarde!"<<endl;
        horainvalida = 1;
    }
    else if(hora >= 18 && hora < 24){
        cout<<"Boa noite!!"<<endl;
        horainvalida = 1;
    }else{
        cout<<"Horário Invalido"<<endl;
    }
}