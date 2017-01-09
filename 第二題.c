#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct point {
  double x;
  double y;
};

struct point *newPoint () {
  struct point *p;
  p = (struct point*)malloc (sizeof (struct point));
  return p;
}

void freePoint (struct point *aPoint) {
  free (aPoint);
}

double absDist (struct point *p1, struct point *p2) {
  double r;
  r = ((p1->x) - (p2->x))*((p1->x) - (p2->x)) + (((p1->y) - (p2->y))*((p1->y) - (p2->y)));
  r = sqrt (r);
  return r;
}

int main () {
  struct point *a, *b;
  double x, y, r;
  a = newPoint ();
  b = newPoint ();
  scanf ("%lf %lf", &x, &y);
  a->x = x, a->y = y;
  scanf ("%lf %lf", &x, &y);
  b->x = x, b->y = y;
  r = absDist (a, b);
  printf ("%f\n", r);
  freePoint (a);
  freePoint (b);
  system ("pause");
}
