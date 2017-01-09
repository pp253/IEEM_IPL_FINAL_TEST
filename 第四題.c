#include<stdio.h>
#include<stdlib.h>

int swap (int*a, int*b) {
  int t;
  t = *a;
  *a = *b;
  *b = t;
}

int main (void) {
  int a, b, r, t;
  printf ("請輸入兩個整數: ");
  scanf ("%d %d", &a, &b);
  while (1) {
    if (b > a) {
      swap (&a, &b);
    }
    r = a%b;
    if (r == 0) {
      printf ("最大公因數為: %d\n", b);
      break;
    }
    a = b;
    b = r;
  }
  system ("pause");
}
