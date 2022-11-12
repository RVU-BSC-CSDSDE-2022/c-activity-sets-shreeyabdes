#include <math.h>

float input()
{
  float n;
  printf("Enter the number\n");
  scanf("%f",&n);
  return n;
}

float square_root(float n)

{
  float sqroot;
  sqroot=sqrt(n);
  return sqroot;
}

void output(float n, float sqroot)

{
  printf("the squareroot of %f is %f\n",n,sqroot);
}

float main()
{
  float n, sqr;
  n=input();
  sqr=square_root(n);
  output(n,sqr);
}