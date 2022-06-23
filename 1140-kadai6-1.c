#include <stdio.h>

typedef struct pointint
{
  int x;
  int y;
} POINTINT;

typedef struct pointdouble
{
  double x;
  double y;
} POINTDOUBLE;

POINTDOUBLE getMiddlePoint(POINTINT p1, POINTINT p2);

int main(void)
{
  POINTINT p1, p2;
  POINTDOUBLE pm;

  printf("(x1, y1) ");
  scanf("%d %d", &p1.x, &p1.y);
  printf("(x2, y2) ");
  scanf("%d %d", &p2.x, &p2.y);

  pm = getMiddlePoint(p1, p2);
  printf("Midpoint between (%d, %d) and (%d, %d) is (%0.1f, %0.1f).", p1.x, p1.y, p2.x, p2.y, pm.x, pm.y);

  return 0;
}

POINTDOUBLE getMiddlePoint(POINTINT p1, POINTINT p2)
{
  POINTDOUBLE pm;

  pm.x = ((double)p1.x + (double)p2.x) / 2;
  pm.y = ((double)p1.y + (double)p2.y) / 2;
  return pm;
}