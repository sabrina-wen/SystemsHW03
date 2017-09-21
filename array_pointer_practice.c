#include <stdlib.h> // keep this to keep warning out!!
#include <stdio.h>
#include <time.h>

int main() {
  srand(time(NULL));

  int ary[10], new_ary[10];
  int i, j, * ip;
  // i is an integer
  // ip will be set to the address of i
  // *ip will refer to the val at the address of i

  for (i = 0; i < 9; i++) {
    ary[i] = rand();
  }
  ary[9] = 0;

  /* loop through new ary
  for each element set it to the pointer at 9 - element
  */

  printf("The original array:\n");
  for (i = 0; i < 10; i++) {
    printf("arr[%d]: %d\n", i, ary[i]);
  }

  int current;
  for (j = 0; j < 10; j++) {
    ip = &(ary[j]);
    new_ary[9 - j] = *ip;
  }

  printf("\nThe new array:\n");
  for (j = 0; j < 10; j++) {
    printf("arr[%d]: %d\n", j, new_ary[j]);
  }

  return 0;
}
