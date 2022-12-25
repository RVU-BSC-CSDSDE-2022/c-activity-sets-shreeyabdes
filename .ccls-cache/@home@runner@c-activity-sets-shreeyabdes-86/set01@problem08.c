#include <stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the array size:");
  scanf("%d",&n);
  return n;
}
void input_array( int n, int a[n])
{
  printf("Enter the elements of the array:");
  for (int i= 0; i<n ; i++)
  scanf("%d", &a[i]);
  }
int sum_n_array(int n,int a[n])
{
  int sum=0;
  for ( int i= 0; i<n ; i++)
  sum = sum+a[i];
  return sum;
}
void output(int n,int a[n], int sum)
{
  printf("The sum is : %d" ,sum);
}
int main()
{
  int n, a[20], p,i;
  n=input_array_size();
  input_array(n,a);
  p=sum_n_array(n,a);
  output (n,a,p);
}
