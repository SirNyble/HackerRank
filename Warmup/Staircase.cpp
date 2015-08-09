#include <stdlib.h>
#include <stdio.h>

int main()
{
  int height;
  int ret = scanf("%d", &height);
  if(ret)
  {
    for(int i = 1; i <= height; i++)
    {
      for(int j = 1; j <= height; j++)
      {
        if(j > (height - i)) printf("#");
        else printf(" ");
      }
      printf("\n");
    }
  }
  return 1;
}
