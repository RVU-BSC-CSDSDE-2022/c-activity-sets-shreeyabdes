#include <stdio.h>
typedef struct _triangle
{
	float base, altitude, area;
} Triangle;

Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base of triangle\n");
  scanf("%f", &t.base);
   printf("Enter the altitude of triangle\n");
  scanf("%f", &t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area=0.5*(t->base)*(t->altitude);
}
void output(Triangle t)
{
  printf("The area of trianlge is %f\n", t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}