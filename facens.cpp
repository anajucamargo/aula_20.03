#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
   //fala todos os valores que serão utilizados 
    double ac1, ac2, af, nota1, nota2, nota3;
//pede ao usuario que ele digite a nota
    cout << "digite a sua primeira nota da ac1 >>> ";
    cin >> ac1;
//pede ao usuario que ele digite a segunda nota
    cout << "digite a sua segunda nota da ac2 >>> ";
    cin >> ac2;
//pede ao usuario que ele digite a terceira nota
    cout << "digite a sua terceira nota da af >>> ";
    cin >> af;
//multiplica a primeira nota por 0,15
    nota1 = ac1 * 0.15;
//multiplica a segunda nota por 0,35
    nota2 = ac2 * 0.35;
//multiplica a terceira nnota por 0,5
    nota3 = af * 0.50;
    //soma o resultado das multiplicações
    double soma = (nota1 + nota2 + nota3);
//imforma ao usuario sua nota do semestre
    cout << "a sua media no semestre foi: " << soma << endl << endl;
//se a nota for maior ou igual a 5, ele mostra a mensagem de aprovação
    if(soma >= 5){
        cout << "parabens voce foi aprovado!" << endl;
//se a nota for menor que 5, mostra a mensagem de reprovação
    }else{
        cout << " eita! voce foi reprovado!" << endl;
    }
    return 0;
}