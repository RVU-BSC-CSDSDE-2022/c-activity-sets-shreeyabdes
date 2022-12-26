#include <stdio.h>
struct _complex 
{
	float real;
	float imaginary;
};
typedef struct _complex Complex;

Complex input_complex()
{
  Complex c;
  printf("Enter real and imaginary parts of complex number\n");
	scanf("%f%f",&c.real,&c.imaginary);
	return c;

}
Complex add_complex(Complex a, Complex b)
{

	Complex c;
	c.real = a.real + b.real;
	c.imaginary = a.imaginary + b.imaginary;
	return c;

}
void output(Complex a, Complex b, Complex sum)
{
  printf("(%f + i %f) + (%f + i %f) is (%f + i%f)\n",a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary); 

}
int main()
{
	Complex a,b,c;
	a= input_complex();
	b= input_complex();
	c= add_complex(a,b);
	output(a,b,c);
}