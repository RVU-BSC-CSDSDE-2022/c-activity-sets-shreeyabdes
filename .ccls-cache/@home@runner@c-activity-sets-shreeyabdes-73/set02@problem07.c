#include <stdio.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

void input (char *name)
{
  printf("Enter the name of the camel\n");
  scanf("%s", name);
}

int main()
{
  char name[100];
  int res=0;
  input (name);
  res=has_nice_name(name);
  output(res);
}

int has_nice_name( char *c)
{
 int i=0, countv=0, countc=0, flag=0;
  for(i=0; c[i]!='\0'; i++)
    {
      if ((c[i]=='a') || (c[i]=='A') || (c[i]=='e') || (c[i]=='E') || (c[i]=='i') || (c[i]=='I') || (c[i]=='o') || (c[i]=='O') || (c[i]=='u') || (c[i]=='U'))
        {
        countv++;
        }
      else 
      countc++;
      if (countv==2 && countc==2)
        return flag=1;
    }
  return flag;
}

void output(int res)
{
  if (res==1)
    printf("The camel has a nice name\n");
  else 
    printf("The camel does not have a nice name\n");
}