#include<iostream>
using namespace std;

int main() {
//mostra o valor de a
    int a = 5;
//mostra o valor de b
    int b = 10;
// mostra o valor de c
    int c = 15;
    // mostra em qual ordem deve ser 
    if (a < b && b < c) {
//fala para o usiario a ordem
        cout << "a ordem é: a, b, c" << endl;
    }
//mostra uma ordem diferente 
    if (a > b || b > c) {
//mostra ao ususario qual informação é verdadeira
        cout << "pelo menos uma das condicoes é verdadeira" << endl;
    }
//fala ao usuario se os valores são iguais
    if (!(a == b)) {
        cout << "a é diferente de b" << endl;

    }
    return 0;
}