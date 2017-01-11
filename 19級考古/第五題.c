#include<stdio.h>
#include<stdlib.h>
#include<string.h>

double **new2D (void) {
  int i;
  double **a;
  a = (double**) malloc (3 * sizeof (double*));
  for (i = 0; i < 3; i++) {
    a[i] = (double*) malloc (3 * sizeof (double));
  }
  return a;
}

void read2D (double **a, char *name) {
  FILE *f;
  int i = 0, j;
  double j1, j2, j3;
  f = fopen (name, "r");
  while (fscanf (f, "%lf %lf %lf", &j1, &j2, &j3) != EOF) {
    a[i][0] = j1;
    a[i][1] = j2;
    a[i][2] = j3;
    i++;
  }
  fclose (f);
}

void write2D (double **c, char *name) {
  int i, j;
  FILE *f;
  f = fopen (name, "w");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      fprintf (f, "%lf ", c[i][j]);
      printf ("%lf ", c[i][j]);
    }
    fprintf (f, "\n");
    printf ("\n");
  }

  fclose (f);
}

void sum2D (double **c, double **a, double **b) {
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      c[i][j] = 0;
      c[i][j] = a[i][j] + b[i][j];
    }
  }
}

int main () {
  double **a, **b, **c;
  a = new2D ();
  b = new2D ();
  c = new2D ();
  read2D (a, "A.txt");
  read2D (b, "B.txt");
  sum2D (c, a, b);
  write2D (c, "C.txt");
  system ("pause");
}
