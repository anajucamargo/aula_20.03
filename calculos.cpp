#include<iostream>
using namespace std;

int main() {
//mostra os numeros que serão usados
    int num1 = 10, num2 = 4;
//mostra as operações que serão usadas
    int soma, multi, divi, modulo, subt;
    //soma os valores
    soma = num1 + num2;
//multiplica os valores
    multi = num1 * num2;
//divide os valores
    divi = num1 / num2;
//faz a função dos valores
    modulo = num1 % num2;
//subitrai os valores
    subt = num1 - num2;
    //mostra ao usisario o resultado da soma
    cout<<soma<<endl;
//mostra ao usisario o resultado da multiplicação
    cout<<multi<<endl;
//mostra ao usisario o resultado da divisão
    cout<<divi<<endl;
//mostra ao usisario o resultado do modulo
    cout<<modulo<<endl;
//mostra ao usisario o resultado da subitração
    cout<<subt<<endl;
    
    return 0;
}