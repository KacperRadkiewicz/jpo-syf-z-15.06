#include <stdio.h>
#include <stdlib.h>
#include "stos1.h"


int main(){
   STOS a EMPTY;
   STOS b EMPTY;

   int k,x;

   do{
      printf("Co zrobic? (1-dodac, 2-pobrac, 3-podglad, 0-koniec)\n");
      scanf("%i", &k);
      switch (k){
          case 1: printf("Podaj wartosc do dopisania: ");
                  scanf("%i", &x);
                  push(b,x);
                  if (push(a,x)){
                      printf("Blad: stos przepelniony\n");
                  }
                  break;
          case 2: if (empty(a)){
                     printf("Blad: stos pusty\n");
                  }
                  else { 
                     x=pop(a); 
                     printf("Pobrano wartosc %i\n", x);
                  }
                  break;
          case 3: if (empty(a)){
                     printf("Blad: stos pusty\n");
                  }
                  else { 
                     x=peek(a); 
                     printf("Na szczycie stosu znajduje sie wartosc %i\n", x);
                  }
          }
          druks(a);
      } while (k!=0); 
   druks(b) ; 
                  
   system ("pause");   
}


