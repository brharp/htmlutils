/*
 * a - prints a link
 */

#include <stdio.h>
#include <string.h>
#include "util.h"

#define LINEMAX 80
#define HREFMAX 80
#define TITLEMAX 256

int
main(int argc, char *argv[])
{
  char line[LINEMAX];
  char title[TITLEMAX];
  char href[HREFMAX];
  FILE *fp;
  while (fgets(line, LINEMAX, stdin)) {
    strrep(line, '\n', '\0');
    strcpy(href, line);
    strcpy(title, line);
    if (fp=fopen(line, "r"))
      while (fgets(line, LINEMAX, fp))
        if (sscanf(line, " <title>%[^<]</title>", title))
          break;
    printf("<a href='%s'>%s</a>\n", href, title);
  }
}
