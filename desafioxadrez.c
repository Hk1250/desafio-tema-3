#include <stdio.h>
int main () {

//lógica= USUARIO VAI DIGITAR A QUANTIDADE DE CASA QUE ELE QUER QUE A PEÇA ANDE.
//O COMPUTADOR VAI ARMAZENAR ESTE VALOR E MOVIMENTAR A PEÇA DE ACORDO COM O VALOR DADO DO USUARIO
// o usuario pode mover apenas 8 casas com qualquer peça,com excessão do peão,cavalo e rei.



int i = 1;
int quantidade;
printf("### XADREZ FACIL###\n");
printf("Digite quantas casa o bispo irá andar para diagonal:\n");
  scanf("%d", &quantidade);


//ESTRUTURA DO-WHILE//
do
{
  //CÓDIGO HÁ SER EXECUTAD0

printf("Esquerda > para baixo \n");


  //MOVIMENTO DA PEÇA
 
i++; //INCREMENTO
}while(i <= quantidade); //ENQUANTO

//ESTRUTURA FOR 
//MOVIMENTO TORRE

int j ;
int movimento;
printf("Digite quantas casas a sua torre irá andar para direita:\n");
scanf("%d", &movimento);

//MOVIMENTOS DA PEÇA

for (j = 1; j <= movimento && movimento <= 8; j++)
{
// CODIGO A SER EXECUTADO   
 printf("movimento para direita\n");
}

//ESTRUTURA WHILE 
// MOVIMENTO RAINHA

int k = 1;
int resultado;
printf("Digite quantas casas sua rainha irá andar para cima:\n");
scanf("%d", &resultado);

while (k <= resultado && resultado <= 8)
{
// CÓDIGO A SEER EXECUTADO 
    printf("CIMA \n");



    k++;
}

printf("ENCERRANDO O JOGO... \n");

}
