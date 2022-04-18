#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int baseRetangulo1, alturaRetangulo1;
    cout<<"Digite a base do primeiro retangulo: ";
    cin>>baseRetangulo1;

    cout<<"Agora digite a altura do retangulo: ";
    cin>>alturaRetangulo1;

    int baseRetangulo2, alturaRetangulo2;
    cout<<"Digite a base do segundo retangulo: ";
    cin>>baseRetangulo2;
    
    cout<<"Agora digite a altura do retangulo: ";
    cin>>alturaRetangulo2;

    cout<<fixed<<setprecision(2);
    float areaRetangulo1 = baseRetangulo1 * alturaRetangulo1;
    float areaRetangulo2 = baseRetangulo2 * alturaRetangulo2;

    cout<<"Area do primeiro retangulo: " << areaRetangulo1 << "cm"<< endl;
    cout<<"Area do segundo retangulo: " << areaRetangulo2 << "cm"<< endl;

    if(areaRetangulo1 > areaRetangulo2){
        cout<<"Area do primeiro retangulo é maior ";
    }else{
        cout<<"Area do segundo retangulo é maior ";
    }
}