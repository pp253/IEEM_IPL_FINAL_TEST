#include<stdio.h>
#include<stdlib.h>
int isprime (int a) {
  int i;
  if (a == 1)
    return 0;
  for (i = 2; i < a; i++) {
    if (a%i == 0) {
      return 0;
    }
  }
  return 1;
}
int nth (int a) {
  int i = 1, c = 0;
  while (c < a) {
    if (isprime (i))
      c++;
    i++;
  }
  return i - 1;
}
int main () {
  int i, j, k, n = 1, *a;
  while (nth (n) < 153) {
    n++;
  }
  a = (int*) malloc (n * sizeof (int));
  for (i = 0; i < n; i++) {
    a[i] = nth ((i + 1));
  }
  for (i = 0; i < n; i++)
    for (j = i; j < n; j++)
      for (k = j; k < n; k++)
        if (a[i] + a[j] + a[k] == 153)
          printf ("%3d+%3d+%3d=153\n", a[i], a[j], a[k]);
  system ("pause");
}
