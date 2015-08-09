#include <stdio.h>
#include <stdlib.h>

int FindSum(int x, int y)
{
  return x + y;
}

int main()
{
  int x, y;
  scanf("%d%d", &x, &y);
  int sum = FindSum(x, y);
  printf("%d", sum);
}
