/*
  *****
  Programa com 3 alturas já atribuídas, que mostra a soma e a média das 3 alturas.
  Débora Rodrigues
  *****
*/
 
#include <stdio.h>
#include <locale.h>

int main ()
{
  setlocale(LC_ALL, "Portuguese");

  float minha_altura = 162;
  float altura_Juan = 168;
  float altura_Nilton = 170;

  float somatoria = minha_altura + altura_Juan + altura_Nilton;
  float media = somatoria / 3;

  printf("Alturas:\n%.0f cm\n%.0f cm\n%.0f cm",minha_altura, altura_Juan, altura_Nilton);
  printf("\n\nA soma das alturas é: %.1f cm", somatoria);
  printf("\nA média das 3 alturas é: %.2f cm", media);
  
  return 0;

}