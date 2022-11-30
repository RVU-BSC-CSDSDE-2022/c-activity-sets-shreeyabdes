#include<stdio.h>
#include<math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main()
{
  float x1, x2,y1,y2,distance;
  input(&x1, &y1, &x2, &y2);
  distance=find_distance(x1,y1,x2,y2);
  output(x1,y1,x2,y2,distance);
  return 0;
  
}

void input(float *x1, float *y1, float *x2, float *y2)
 {
  printf("Enter the x co ordinate of first point\n");
   scanf("%f", x1);
  printf("Enter the y co ordiate of the first point\n");
   scanf("%f", y1);
  printf("Enter the x co ordinate of the second point\n");
   scanf("%f",x2);
  printf("Enter the y co ordinate of the second point\n");
   scanf("%f",y2);
}

float find_distance(float x1, float y1, float x2, float y2)
{
  float distance= pow((pow((x2-x1),2)+ pow((y2-y1),2)), 0.5);
  return distance;
}

void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("The distance between the points (%f,%f) and (%f,%f) is %f",x1, y1, x2, y2,distance);
}
