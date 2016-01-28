
/*
 * lab03_mccaddend_v1.c
 *
 *    Created on: Jan 14, 2016
 *        Author: Mccadden, Deric
 * StudentNumber: A00751277
 */

#include <stdio.h>
#define CHECK(PRED) printf("%s ... %s\n",(PRED) ? "passed" : "FAILED", #PRED)

void squeeze_spaces (void);

int main(void) {

  squeeze_spaces();

  return 0;
}


/*
 *
 */
void squeeze_spaces (void) {
  int c;
  while ((c = getchar()) != EOF){
    if (c == ' '){
      while ((c = getchar()) == ' ')
        ;
      printf(" ");
    }
    putchar(c);
  }
}


















