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
// variavel da entrada do usuario
int opcao; 
//variaveis e atributos dos movimentos do cavalo
int a= 1,b = 1,c = 1,d = 1;

// saida do programa
printf("escolha para onde o cavalo deve andar:\n");
printf("1. Baixo > esquerda\n");
printf("2. Baixo > direita\n");
printf("3. cima > esquerda\n");
printf("4. cima > direita\n");
scanf("%d", &opcao);

// menu interativo 
switch (opcao)
{
  //menu 1 e movimento 1
case 1:
while (a--)
{
  for (int i= 1;i <=2;i++)
  {
  printf("Baixo\n");

  }
  
  printf("Esquerda");
 
}
 break;
// menu 2 e movimento 2
 case 2:
while (b--)
{
  for (int j = 1;j <=2;j++)
  {
  printf("Baixo\n");

  }

  printf("direita");
}
break;
  //menu 3 e movimento 3
case 3:
while (c--)
{
  for (int k = 1;k <=2;k++)
  {
  printf("cima\n");

  }

  printf("esquerda");
}
break;
  //menu 4 e movimento 4
case 4:
while (d--)
{
  for (int l = 1;l <=2;l++)
  {
  printf("cima\n");

  }

  printf("direita");
}

default:
  break;
}

}

