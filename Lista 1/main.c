/*
  *****
  Programa com 3 alturas j� atribu�das, que mostra a soma e a m�dia das 3 alturas.
  D�bora Rodrigues
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

  printf("\nAlturas:\n%.0f cm\n%.0f cm\n%.0f cm",minha_altura, altura_Juan, altura_Nilton);
  printf("\n\nA soma das alturas �: %.1f cm", somatoria);
  printf("\nA m�dia das 3 alturas �: %.2f cm\n\n", media);

  return 0;
}