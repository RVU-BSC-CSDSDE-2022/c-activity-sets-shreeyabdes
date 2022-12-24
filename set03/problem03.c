#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int input_number()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    return n;
}

int is_composite(int n)
{
    for (int i=3; i<n; i++)
    {
        if (n%i==0)
        return 1;
    }
    return 0;
}

void output(int n, int result)
{
    if (is_composite==0)
    printf("The number %d is not composite\n", n);
    else
     printf("The number %d is composite\n", n);
}

int main()
{
    int n,isc;
    n = input_number();
    isc = is_composite(n);
    output(n,isc);
    return 0;
}