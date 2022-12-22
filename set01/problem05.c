#include <stdio.h>
int input()
{
  int n;
  printf("Enter a number");
  scanf("%d",&n);
  return n;
}

int compare(int a, int b, int c)
{ 
if (a>b && a>c)
  return a;
  else if (b>a && b>c)
    return b;
  else
    return c;
  }
int main()
{
  int a,b,c, largest;
  a = input ();
  b = input ();
  c = input ();
  largest = compare ( a,b,c);
  printf(" the largest of %d,%d and %d is %d\n" , a,b,c, largest);
  return 0;
}