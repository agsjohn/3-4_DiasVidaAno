#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
  int anos, meses, dias;
  printf("Digite a sua idade em dias: ");
  scanf("%i", &dias);
  getchar();
  anos = dias / 365;
  dias = dias - ( 365 * anos);
  meses = dias / 30;
  dias = dias - 30 * meses;
  printf("\nAnos: %i \nMeses: %i \nDias: %i", anos, meses, dias);
  getchar();
}