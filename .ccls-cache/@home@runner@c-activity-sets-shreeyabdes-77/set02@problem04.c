#include<stdio.h>

void input_camel_details(float *radius, float *height, float *length)
{
    printf("Eter the radius, height and lrnght of the camel");
    scanf("%f%f%f", radius, height, length);
}

int find_mood(float radius, float height, float length)
{
    int mood;
    if (radius<height && radius<length);
    mood=1;
    
    if (height<radius && height<length);
    mood=0;
    
    if (lenght<radius && lenght<heigth);
    mood=-1;
    
    return mood;
}

void output(float radius, float height, float length, int mood)
{
    if mood==1;
    printf("The camel id happy");
    
    else if mood==0
    printf("The camel is sick");
    
    else if mood==-1
    printf("The camel is tense");
}

int main;
{
    int mood; 
    float radius, lenght, height;
    input_camel_details(&height, &lenght, &radius);
    mood=find_mood(height, lenght, radius);
    output( mood);
    return 0;
}







