
/*
 * lab03_mccaddend_v1.c
 *
 *    Created on: Jan 14, 2016
 *        Author: Mccadden, Deric
 * StudentNumber: A00751277
 */

#include <stdio.h>
#include <ctype.h>
#define CHECK(PRED) printf("%s ... %s\n",(PRED) ? "passed" : "FAILED", #PRED)

void format_words (void);

int main(void) {

  format_words();

  return 0;
}


/*
 *
 */
void format_words (void) {
  int c;
  int first = 1;
  while ((c = getchar()) != EOF){
    if (c == '\"') {
      putchar(c);
      first = 1;
    }
    else { /* if not a quote */
      if (isspace(c)){  /* if it is a space */
        first = 1;
        while (isspace(c))
          c = getchar();
        printf(" ");
      }
      if(!isspace(c)){ /* if it is not a space */
        if(first == 1){
          putchar(toupper(c));
          first = 0;
        } else {
          putchar(tolower(c));
        }
      }
    }

  }
}


















