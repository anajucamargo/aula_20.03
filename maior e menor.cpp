#include<iostream>
using namespace std;

int main() {
//mostra o valor de x
    int x = 10;
//mostra o valor de y
    int y = 20;
    //mostra que o y é maior 
    if (x > y) {
        cout << "x é maior que y" << endl;
//mostra que x é menor
    }
    if (x < y) {
        cout << "x é menor que y" << endl;
//mostra que p x pode ser maior ou igua
    }
    if (x >= y) {
        cout << "x é maior ou igual a y" << endl;
//mostra que p x é menor ou igual
    }
    if ( x <= y) {
        cout << "x é menor ou igual a y" << endl;
//mostra que os valores são iguais
    }
    if (x == y) {
        cout << "x é igual a y" << endl;
//mostra que os valores são diferentes
    }
    if (x != y) {
        cout << "x é diferente de y" << endl;

    }
    return 0;
}