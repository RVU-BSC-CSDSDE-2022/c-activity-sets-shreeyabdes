#include <stdio.h> 
int input()

{
int a;
printf("Enter the number\n"); 
  scanf("%d",&a);
return a;
}

int add(int a,int b) 

{
int sum; sum = a+b; 
  return sum;
}

void output(int a,int b, int sum) 

{
printf("The sum of %d and %d is %d",a,b,sum);
  }

int main() 

{
int e,f,g; e=input(); 
  f=input(); 
  g=add(e,f); 
  output(e,f,g); 
  return 0;
}