#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned int k = 2200000000;

  char * p_to_k = &k; //Gives an incompatiable warning

  //prints k in hexadecimal
  printf("Value of unsigned int: %u\n", k); //Binary: 10000011001000010101011000000000
  printf("Hex value of unsigned int: %x\n\n", k);

  //printing eaching byte of int
  for(int i = 0; i < sizeof(k); i++){
    printf("Hex value of byte: %hhx\n", *p_to_k);
    p_to_k ++;
  }

  p_to_k = &k;
  //increment each byte by one
  for(int j = 0; j < sizeof(k); j++){
    *p_to_k += 1;
    p_to_k ++;
    printf("\nValue after incrementing by 1: %u\n", k); // Binary: 10000100001000100101011100000001
    printf("Hex Value after incrementing by 1: %x\n", k);
    
  }

  printf("\n\n\n");
  p_to_k = &k;
  //increment each byte by 16
  for(int j = 0; j < sizeof(k); j++){
    *p_to_k += 16;
    p_to_k ++;
    printf("\nValue after incrementing by 16: %u\n", k); // Binary: 10000100001000100101011100000001
    printf("Hex Value after incrementing by 16: %x\n", k);
  }

 
  
  
  
}
