#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);


int main()
{
  char string[100], substring[100];
  int index=0;
  input_string(string, substring);
  index= sub_str_index(string, substring);
  output(string,substring,index);
  return 0;
}

void input_string(char* a, char* b)
{
  printf("Enter the string\n");
  scanf("%s" , a);
  printf("Enter the substring\n");
  scanf("%s" , b);
}

int sub_str_index(char* string, char* substring)
{
  int len1,len2, index=-1, count=0;
  len1= strlen(string);
  len2= strlen(substring);
  for (int i=0; string[i]!= '\0' && substring[i]!='\0' ; i++)
    {
      if(string[i]==substring[0])
        {
        index=i;
        for(int j=0,k=i;
          substring[j]!='\0' &&
          string[k]!= '\0' ; j++,k++)
          {
            if(string[k]==substring [j])
              count++;
          }
        if(count==len2)
          return index;
        }
    }
}

void output(char *string, char *substring, int index)
{
  if(index>=0)
    printf(" The index of the substring is %d" , index);
  else 
    printf("No substring found\n");
}