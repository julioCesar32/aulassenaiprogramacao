#include <bits/stdc++.h>

using namespace std;
int main(){

    int hora;
    bool horainvalida = 0;

    while(horainvalida == 0){    
        cout << "Digite uma hora do dia: " << endl;
        cin >> hora;

        if(hora<12){
            cout<<"Bom dia!"<<endl;
        }
        else if(hora >= 12 && hora < 18){
            cout<<"Boa tarde!"<<endl;
        }
        else if(hora >= 18 && hora < 24){
            cout<<"Boa noite!!"<<endl;
        }else{
            cout<<"Horário Invalido"<<endl;
            horainvalida = 1;
        }
    }
}