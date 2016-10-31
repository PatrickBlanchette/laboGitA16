#include <stdio.h>

/* Hello world */

#define NOMBRE 10
#define LONGUEUR_LIGNE 46

int main(){
  int i, j;
  printf("  * |");
  
  for(i = 1; i < NOMBRE + 1; i++){
    printf("%4d", i);
  }
  printf("\n");
  
  for(i = 1; i < LONGUEUR_LIGNE; i++){
    printf("_");
  }
  printf("\n");
  
  for(i = 1; i < NOMBRE + 1; i++){
    printf("%4d|", i);
    
    for(j = 1; j < NOMBRE + 1; j++){
      printf("%4d", i * j);
    }
    printf("\n");
  }
  
  
	return 0;
}
