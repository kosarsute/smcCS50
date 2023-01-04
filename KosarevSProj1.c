#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
  printf("Sergei Kosarev");
  printf("\n");
  int i, len;
  char name[] = {'s', 'k'};
  len = strlen(name);
  for (i = 0; i < len; i++)
  {
    name[i] = toupper(name[i]);
  }
  for (i = 0; i < len; i++)
  {
    if (name[i] == 'S')
    {
      printf("   SSSSSSSSSS");
    }
    else if (name[i] == 'K')
    {
      printf("   KKK   KKK");
    }
  }
  printf("\n");
  for (i = 0; i < len; i++)
  {
    if (name[i] == 'S')
    {
      printf("   SSS    SSS");
    }
    else if (name[i] == 'K')
    {
      printf("   KKK  KKK ");
    }
  }
  printf("\n");
  for (i = 0; i < len; i++)
  {
    if (name[i] == 'S')
    {
      printf("   SSS    ");
    }
    else if (name[i] == 'K')
    {
      printf("      KK KK  ");
    }
  }
  printf("\n");
  for (i = 0; i < len; i++)
  {
    if (name[i] == 'S')
    {
      printf("   SSSSSSSSSS");
    }
    else if (name[i] == 'K')
    {
      printf("   KKK   ");
    }
  }
  printf("\n");
  for (i = 0; i < len; i++)
  {
    if (name[i] == 'S')
    {
      printf("          SSS");
    }
    else if (name[i] == 'K')
    {
      printf("   KK KK  ");
    }
  }
  printf("\n");
  for (i = 0; i < len; i++)
  {
    if (name[i] == 'S')
    {
      printf("   SSS    SSS");
    }
    else if (name[i] == 'K')
    {
      printf("   KKK  KKK ");
    }
  }
  printf("\n");
  for (i = 0; i < len; i++)
  {
    if (name[i] == 'S')
    {
      printf("   SSSSSSSSSS");
    }

    else if (name[i] == 'K')
    {
      printf("   KKK   KKK");
    }
  }
  return 0;
}
