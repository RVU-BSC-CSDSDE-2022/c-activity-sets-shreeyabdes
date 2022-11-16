#include <stdio.h>
void input_triangale(float *base, float *height)

{
    printf("enter the base and height\n");
    scanf("%f%f", base, height);
}
 
 float find_area(float base, float height)
 
 {
     float area=0.5 *base *height;
     return area;
 }
 
 void output(float base, float height, float area)
 
 {
     printf("The are of triangle with %f as base and %f as height is %f", base,height,area);
 }
 
 int main(void)
 {
    float base, height, area;
    input (&base,&height);
    area=find_area(base,height);
    output(base,height,area);
    return 0;
 }
 