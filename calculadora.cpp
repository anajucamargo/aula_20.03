// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    string valor;
    char op;
    float num1, num2;
    cout << "Entre com o operador: -,+,/,*: ";
    cin>> op;
    cout<< "entre com dois valores: ";
cin >> num1, num2;
    
    switch(op) {
        case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2;
        break;
        case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2;
        break;
        case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2;
        break;
        case '/':
        cout << num1 << "/" << num2 << "=" << num1 / num2;
        default:
        cout <<"Operador inválido! por favor insira outro operador";
        break;
    }
    cout << "deseja continuar? (s/n)";
    cin >> valor;
    
     }   
     while ( valor = "s") ;
        
    

    return 0;
    } 