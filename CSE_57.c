#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  int i,len;
  char name[30];
  fgets(name,30,stdin);
  len=strlen(name);
  for(i=0;i<len;i++)
  {
    name[i]=toupper(name[i]);
  }
  for(i=0;i<len;i++)
  {
    if(name[i]=='C'|| name[i]=='E'|| name[i]=='S')
    {
      printf("   *****");
    }

  }
  printf("\n");
  for(i=0;i<len;i++)
  {

    if(name[i]=='C'|| name[i]=='E' || name[i]=='S')
    {
      printf("   *    ");
    }

  }
  printf("\n");
  for(i=0;i<len;i++)
  {

    if(name[i]=='C'|| name[i]=='E' || name[i]=='S')
    {
      printf("   *    ");
    }

  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='E' || name[i]=='S' )
    {
      printf("   *****");
    }
    else if(name[i]=='C')
    {
      printf("   *    ");
    }

  }
  printf("\n");
  for(i=0;i<len;i++)
  {

    if(name[i]=='C'|| name[i]=='E')
    {
      printf("   *    ");
    }
    if(name[i]=='S')
    {
      printf("       *");
    }

  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='C'|| name[i]=='E')
    {
      printf("   *    ");
    }
    if(name[i]=='S')
    {
      printf("       *");
    }

  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='C' || name[i]=='E' || name[i]=='S')
    {
      printf("   *****");
    }

  }
  return 0;
}

