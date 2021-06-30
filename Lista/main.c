#include <stdio.h>
#include <stdlib.h>

int main()
{
// Criando a estrutura de lista
 struct lista{
 int valor;
 struct lista *proximo;
 };

 //Criando variaveis do tipo lista (que por sinal é do tipo estrutura)
 struct lista m1, m2, m3, m4;
 struct lista *gancho = &m1;


 //Atribuindo valores para a estrutura lista
 m1.valor = 10;
 m2.valor = 20;
 m3.valor = 30;
 m4.valor = 40;

 //Passando quem é o próximo nessa lista
 m1.proximo = &m2;
 m2.proximo = &m3;
 m3.proximo = &m4;
 m4.proximo = (struct lista *)0; // Quando for igual a null, para poder finalizar a lista


 //While para printar na tela.
 while(gancho != (struct lista *)0)
 {
    printf("%d",gancho->valor);
    printf("\n");
    gancho = gancho->proximo;
 }



}
