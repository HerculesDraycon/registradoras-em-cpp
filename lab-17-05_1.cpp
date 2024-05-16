 /*Algoritmo para uma loja, essa loja tem algumas regrinhas especiais: 
- Ela vai atender uma quantidade de clientes que será indicada ao abrir a loja.
- Cada cliente pode entrar com quantos valores (produtos) quiser, quando ele entrar com valor negativo encerra a compra dele.
  (não considerar esse valor negativo para calcular média dele).
- O algoritmo mostra a cada cliente a média de valor dos produtos dele.
- Ao fim, mostra a média de gastos por clientes.*/

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

        cout<<"A media de gastos do cliente "<<(ccl + 1)<<" foi: "<<somaprodutos/i<< endl;

        if(ccl < clientes-1){
            cout<<"Proximo cliente. "<<endl<<"Insira os valores dos produtos escolhidos:"<< endl;
        }

    }

    cout<<"A media geral de gastos dos clientes foi: "<<actotal/clientes<< endl;

    return 0;
}