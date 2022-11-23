#include<stdio.h>

void input(char*name);
int has_nice_name(char *c);
void output(int res);

int main()
{
  char name[100];
  int res=0;
  input(name);
  res=has_nice_name(name);
    output(res);
}





void input(char *name)
{
  printf("Enter the name of the camel\n");
  scanf("%s",name);
}


int  has_nice_name(char *c)
{
  int i=0;
  for(i=0; c[i]!='\0', i++);
    {
     if(c[i]=='a') || (c[i]=='A') || 
       (c[i]=='e') || (c[i]=='E') || (c[i]=='i') ||
       (c[i]=='I') || (c[i]=='o') ||  (c[i]=='0') ||
       (c[i]=='u') || (c[i]=='U')
}

{
  count1++;
}
  else if
count2++;
  if(count1==2 && count2==2)
    return flag=1;
  }

void output(int res)
{
  if(res==1)
    printf("The camel has a nice name\n");
      else 
    printf("The camel does not have a nice name\n");
}