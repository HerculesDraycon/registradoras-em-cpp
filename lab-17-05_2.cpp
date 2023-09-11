#include <iostream>
using namespace std;

int main(){

    int c_aprovados = 0, c_reprovados = 0, c_turmas = 0, c_media = 0, turmas, comando;
    float nota1, nota2, nota3, media_al = 0, media_g = 0;

    cout<<"Quantas turmas serao avaliadas?"<< endl;
    cin>>turmas;

    for(c_turmas=0; c_turmas<turmas; c_turmas++){

        do {

            cout<<"Coloque as 3 notas do aluno."<< endl;

            cin>>nota1>>nota2>>nota3;

            media_al = (nota1+nota2+nota3)/3;

            if(media_al>=7){
                c_aprovados++;
            } else {
                c_reprovados++;
            }

            cout<<"Para finalizar essa turma, digite -1 ou digite 0 para continuar"<< endl;
            cin>>comando;
            media_g += media_al;
            c_media++;
        }
        while(comando != -1);

        cout<<"Media da turma: "<<media_g/c_media<< endl;

        media_g = c_media = 0;

    }

    cout<<c_aprovados<<" foram aprovados"<< endl;
    cout<<c_reprovados<<" foram reprovados"<< endl;

    return 0;
}