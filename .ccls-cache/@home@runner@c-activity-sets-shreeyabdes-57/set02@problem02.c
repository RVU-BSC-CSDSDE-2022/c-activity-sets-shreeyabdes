include<stdio.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

#include<stdio.h>
#include<math.h>
void input_camel_details(float *radius,float *height,float *length)
{
  printf("Enter the radius\n");
  scanf("%f",radius);

  printf("Enter the height\n");
  scanf("%f",height);

  printf("Enter the length\n");
  scanf("%f",length);
  }

  float find_weight(float radius,float height,float length)
  { //weight = pi * stomach_radius^3 * sqrt(height * length)`
    float weight;
    int a,b,c;
    a= pow(radius,3);
    b= height*length;
    c= sqrt(b);
    weight= 3.14*a*c;
    return weight;
    
  }
  int main()
  {
    float radius, height, weight, length;
    input_camel_details(&radius,&height,&length);
    weight = find_weight(radius,height,length);
    printf("The weight of camel is %f\n",weight);
    return 0;
  }