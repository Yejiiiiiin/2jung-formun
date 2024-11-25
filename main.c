#include<stdio.h>

int main(void){

  int i, c;

  for(i=0; i<5; i++){
    for(c=0; c<i+1; c++){
    printf("*");
    }
  printf("\n");
  }
}