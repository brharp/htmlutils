/*
 * li - prints a list item
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "util.h"

#define LINEMAX 80
#define ITEMMAX 80
  
int
main(int argc, char *argv[])
{
  char line[LINEMAX];
  char item[ITEMMAX];
  char *class = 0;

  while (--argc > 0 && (*++argv)[0] == '-') {
    switch (argv[0][1]) {
    case 'c':
      if (--argc < 1) {
        fprintf(stderr, "-c requires an argument\n");
        exit(EXIT_FAILURE);
      }
      class = *++argv;
      break;
    }
  }

  while (fgets(line, LINEMAX, stdin)) {
    strrep(line, '\n', '\0');
    strcpy(item, line);
    printf("<li");
    if (class)
      printf(" class='%s'", class);
    printf(">%s</li>\n", item);
  }
}
