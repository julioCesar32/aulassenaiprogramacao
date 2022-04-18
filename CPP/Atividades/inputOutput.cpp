#include <bits/stdc++.h>

using namespace std;

int main(){

    double salario1, salario2;
    string nome1, nome2;
    int idade1, idade2;
    char sexo1, sexo2;

    cout<<fixed<<setprecision(2);
    cout<<"Nome da primeira pessoa? ";
    getline(cin,nome1);
    cout<< endl;
    cout<<"Salario da primeira pessoa: ";
    cin>>salario1;
    cout<<endl;
    cout<<"Digite a idade da primeira pessoa: ";
    cin>>idade1;
    cout<<endl; 
    cout<<"Digite o sexo (F/M) da primeira pessoa: ";
    cin>>sexo1;

    cout<<"Nome da segunda pessoa? ";
    getline(cin,nome2);
    cout<< endl;
    cout<<"Salario da segunda pessoa: ";
    cin>>salario2;
    cout<<endl;
    cout<<"Digite a idade da segunda pessoa: ";
    cin>>idade2;
    cout<<endl;
    cout<<"Digite o sexo (F/M) da segunda pessoa: " << endl;
    cin>>sexo2;

    cout<< "*********** RELATORIO DE DADOS ***********"<<endl<<endl;
    cout<<"nome: "<<nome1<<endl;
    cout<<"salario: "<<salario1<<endl;
    cout<<"idade: "<<idade1<<endl;
    cout<<"Genero: "<<sexo1<<endl;

    cout<<"nome: "<<nome2<<endl;
    cout<<"salario: "<<salario2<<endl;
    cout<<"idade: "<<idade2<<endl;
    cout<<"Genero: "<<sexo2<<endl;

}