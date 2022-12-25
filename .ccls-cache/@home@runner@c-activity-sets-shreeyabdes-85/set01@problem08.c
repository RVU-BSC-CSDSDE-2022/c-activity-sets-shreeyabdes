#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the size of the array");
  scanf("%d" ,&n);
  return n;
}

void input_array(int n, int a[n])
{
  int i;
  printf("enter the elements");
  for(i=0;i<n;i++)
scanf("%d",&a[i]);
}
int sum_n_array(int n, int a[n])
{
  int i, sum=0;
   for(i=0;i<n;i++)
  sum=sum+a[i];
  return sum;
}
void output(int n, int a[n],int sum)
{
  printf("The sum is: %d" ,sum);
}
int main()
{
  int k, a[20],p,i;
  k=input_array_size();
  input_array(k,a);
  p=sum_n_array(k,a);
    output(k,a,p);
}
