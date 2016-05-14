#include <stdlib.h>
#include <stdio.h>

#define LINEMAX 80

int
main(int argc, char *argv[])
{
  char line[LINEMAX];

  puts("<html>");
  while(fgets(line, LINEMAX, stdin)) {
    fputs(line, stdout);
  }
  puts("</html>");
}
