#include <stdio.h>
#include <math.h>

typedef struct point
{
  double x;
  double y;
} POINT;

void rotatePoint(POINT *p1, int dt);

int main(void)
{
  int dt;
  POINT p1;

  printf("> (x1, y1) ");
  scanf("%lf %lf", &p1.x, &p1.y);

  while (1)
  {
    printf("> (dt) ");
    scanf("%d", &dt);

    rotatePoint(&p1, dt);

    printf("(%.0f, %.0f)\n", p1.x, p1.y);
  }

  return 0;
}

void rotatePoint(POINT *p1, int dt)
{
  double l, sina, cosa, ddt;
  POINT p2;
  l = sqrt((p1->x) * (p1->x) + (p1->y) * (p1->y));
  ddt = (M_PI / 180) * dt;

  p2.x = p1->x;
  p2.y = p1->y;

  p1->x = p2.x * cos(ddt) - p2.y * sin(ddt);
  p1->y = p2.y * cos(ddt) + p2.x * sin(ddt);
}