#include <stdio.h>
 #include <stdlib.h>
 int main(int argc , char *argv[]) {
 int i = 1; // allocated from initialized data segment
 int j; // allocated from uninitialized data segment
 int *ptr; // allocated from heap segment
 ptr = malloc(sizeof(int)); // allocate memory
 printf("%i %i %i\n",i,j,*ptr);
 i = 2;
 *ptr = 3;
 printf("%i %i %i\n",i,j,*ptr);
 j = 4;
 free(ptr); // deallocate memory
/* printf("%i %i %i\n",i,j,*ptr);*/
 }