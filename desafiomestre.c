#include <stdio.h>
 
// recursividade do bispo

 void bispo(int movimento){
if (movimento > 0){
    printf("esquerda > para baixo \n");
    bispo(movimento - 1);
}


 }
 // recursividade da torre
 void torre(int movimento2){
    if (movimento2 > 0 && movimento2 <= 8) {
    printf("direita\n");
    torre(movimento2 - 1);
    }
    
     }
// recursividade da rainha
     void rainha(movimento3){
if (movimento3 > 0 && movimento3 <= 8)
{
    printf("esquerda\n");
    rainha(movimento3 - 1);
}


     }
// movimento do bispo
 int main() {
    int quantidade;
    printf("### XADREZ FACIL###\n");
    printf("Digite quantas casa o bispo irá andar para diagonal esquerda:\n");
      scanf("%d", &quantidade);
    bispo(quantidade);
// movimento da torre
    int quantidade2;
printf("digite quantas casas sua torre vai caminhar para a direita:\n");
scanf("%d", &quantidade2);
torre(quantidade2);

// movimento da rainha 

int quantidade3;
printf("Digite quantas casas sua rainha deve andar para a esquerda:\n");
scanf("%d", &quantidade3);
rainha(quantidade3);

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
  
  printf("Esquerda\n");
 
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

  printf("direita\n");
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

  printf("esquerda\n");
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

  printf("direita\n");
}

default:printf("Opção invalida \n");
  break;
}
printf("Encerrando o jogo... \n");


    return 0;    
 }