#include <iostream>
#include <string>
using namespace std;

int main() {
 //informa que o personagem tem vida  
 int life;
    //informa que o personagem tem energia
float energy;
   //informa se o status do personagem
 bool status;
   //mostra o personagem
 string character;
    
  //mostra a vida do personagem
life = 5;
  //mostra a energia do personagem
  energy = 99.99f;
   //mostra se o personagem esta vivo ou morto
 status = true;
    //mostra o nome do personagem
character = "mega man";
    
    //aparece na tela a vida 
cout<<life<<endl;
   //aparece na tela a energia
 cout<<energy<<endl;
   //aparece na tela o status
 cout<<status<<endl;
   //mosta na tela o personagem
 cout<<character<<endl;
    
    return 0;
}