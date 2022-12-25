#include <stdio.h>
void input(int *a, int *b, int *c)
{
  
  printf("Enter the 3 numbers\n");
  scanf("%d %d %d",a,b,c);
}
int largest(int a,int b,int c)
{
  if(a>b && a>c)
    return a;
  else if(b>a && b>c)
    return b;
  else 
    return c;
}

int main()
{
  int e,f,g,h;
  input(&e,&f,&g);
  h = largest(e,f,g);
  printf("Largest number amongst %d ,%d and %d is %d",e,f,g,h);
   return 0;
}