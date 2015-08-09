#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
  int arrSize;
  scanf("%d", &arrSize);
  long long int arrSum = 0;
  long long int num;
  
  for(int i = 0; i < arrSize; i++)
  {
    scanf("%llu", &num);
    arrSum += num;
  }
  printf("%llu", arrSum);
}
