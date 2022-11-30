#include<stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);


int main()
{
  int n, fibo;
  n= input(n);
  fibo = find_fibo(n);
  output(n,fibo);
  return 0;
}

int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d", &n);
  return n;
}

int find_fibo(int n)
{
  int a[n+1];
  a[0]=0, a[1]=1;
  for(int i=2; i<=n; i++)
    {
      a[i]=a[i-1]+a[i-2];
    }
  return a[n];
}

void output(int n, int fibo)
{
  printf("fibo(%d) is %d", n,fibo);
}