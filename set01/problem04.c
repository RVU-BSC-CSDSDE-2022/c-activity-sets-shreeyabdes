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
int a,b,c;
input(&a,&b);
add(a,b,&c);
printf("The sum of %d and %d is %d",a,b,c);
return 0;
}