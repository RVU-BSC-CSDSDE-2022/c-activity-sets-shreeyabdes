#include <stdio.h> 
int input(int *a, int *b) 

{
printf("Enter 2 numbers");
scanf("%d%d",a,b); 
  }

void add(int a,int b, int *c) 

{
*c= a+b; 
  }

int main() 

{
int x,y,z;
input(&x,&y);
add(x,y,&z);
printf("The sum of %d and %d is %d",x,y,z);
return 0;
}