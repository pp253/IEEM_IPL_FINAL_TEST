#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (void) {
  FILE *in;
  char a[30], b[30];
  int c = 0;
  in = fopen ("input.txt", "r");
  scanf ("%s", a);
  while (fscanf (in, "%s", b) != EOF) {
    if (strcmp (a, b) == 0)
      c++;
  }
  printf ("Input string = %s\n", a);
  printf ("The number of times = %d\n", c);
  fclose (in);
  system ("pause");
}
