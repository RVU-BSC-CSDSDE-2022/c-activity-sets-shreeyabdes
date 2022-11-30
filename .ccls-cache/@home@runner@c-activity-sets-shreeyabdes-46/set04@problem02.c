#include<stdio.h>
#include<math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)

int main()

{
  printf("Enter the x co ordinate for the first point\n");
  scanf("%f", x1);
  printf("Enter the y co ordinate for the first point\n");
  scanf("%f", y1);
  printf("Enter the x co ordinate for the second point\n");
  scanf("%f", x2);
  printf("Enter the y co ordinate for the second point\n");
  scanf("%f", y2);
  printf("Enter the x co ordinate for the third point\n");
  scanf("%f", x3);
  printf("Enter the y co ordinate for the third point\n");
  scanf("%f", y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float calc;
  int flag=0;
  calc= x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);
  if (calc==0)
    flag=0;
  else if 
    flag=1;
    return flag;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
  if (result==0)
  printf("The points (%f,%f), (%f,%f) and(%f,%f)do not form a triangle"(x1,y1), (x2,y2), (x3,y3));
  
  if (result==1)
    ptintf("The points (%f,%f), (%f,%f) and(%f,%f) form a triangle"(x1,y1), (x2,y2), (x3,y3));
}