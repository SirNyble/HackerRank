#include <stdio.h>
#include <stdlib.h>

int FindSum(int x, int y)
{
  return x + y;
}

int main()
{
  int numSums, x, y;
  scanf("%d", &numSums);
  for(int i = 0; i < numSums; i++)
  {
    scanf("%d%d", &x, &y);
    printf("%d", FindSum(x, y));
  }
}
