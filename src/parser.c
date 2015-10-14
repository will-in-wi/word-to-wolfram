#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BEFORE 0
#define INSIDE 1
#define AFTER 2

int main(int argc, char *argv[]) {

  // Simple state machine.
  int state = BEFORE;

  printf("{{");

  int i;
  for (i = 0; i < strlen(argv[1]); i++) {
    char c = argv[1][i];

    if (state == BEFORE && c == '(') {
      state = INSIDE;
    } else if (state == BEFORE) {
      continue;
    } else if (state == INSIDE && c == ')') {
      state = AFTER;
      break;
    } else {

      // Parse the inside.
      switch (c) {
        case '&':
          printf(",");
          break;
        case '@':
          printf("},{");
          break;
        default:
          printf("%c", c);
      }
    }
  }

  printf("}}\n");

  // Return success status code.
  return 0;
}
