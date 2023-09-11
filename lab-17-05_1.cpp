#include <iostream>
using namespace std;

int main(){

    int valor, clientes, ccl, actotal = 0, i = 0, somaprodutos;

    cout<<"Quantos clientes vao ser atendidos?"<< endl;
    cin>>clientes;
    cout<<"Insira os valores dos produtos escolhidos: "<< endl;

    for(ccl=0; ccl<clientes; ccl++){

        somaprodutos = 0;
        i = 0;

        cin>>valor;

        while(valor>0){
            actotal+=valor;
            somaprodutos+=valor;
            i++;
            cin>>valor;
        }

        cout<<"O media de gastos do cliente foi: "<<somaprodutos/i<< endl;

    }

    cout<<"A media geral de gastos dos clientes foi: "<<actotal/clientes<< endl;
    cout<<"Proximo cliente: "<< endl;

    return 0;
}