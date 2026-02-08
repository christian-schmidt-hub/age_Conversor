#include <iostream>
using namespace std;

int pegar_idade(){
    int idade;
    cout<<"Digite sua idade\n";
    cin>>idade;
    return idade;
}
void calc_idade(int idade){
    int meses,semanas;
    float horas, dias;
    
    meses = idade * 12;
    dias = idade * 365.25;
    semanas = dias / 7;
    horas = dias * 24;
    
    cout<<"voce tem: \n" << "Meses: "<< meses <<"\nSemanas: "<<semanas<< "\nDias: "<<dias<<"\nHoras: "<<horas;
}
int main(){
    int idade = pegar_idade();
    calc_idade(idade);
    return 0;
}