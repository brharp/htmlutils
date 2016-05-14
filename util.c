void
strrep(char *s, char from, char to)
{
  while (*s) {
    if (*s == from)
      *s = to;
    ++s;
  }
}
