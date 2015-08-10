#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <sstream>

int main()
{
  int numTests;
  scanf("%d", &numTests);

  int numDigits, numFives = 0, numThrees = 0;
  bool foundDecentNum;
  for(int i = 0; i < numTests; i++)
  {
    scanf("%d", &numDigits);
    numFives = numDigits;
    numThrees = 0;
    foundDecentNum = false;
    for(int j = 0; j <= numDigits; j++)
    {
      if(((numFives % 3) == 0) && ((numThrees % 5) == 0))
      {
        for(int fives = 0; fives < numFives; fives++) printf("%d", 5);
        for(int threes = 0; threes < numThrees; threes++) printf("%d", 3);
        printf("\n");
        foundDecentNum = true;
        break;
      }
      else
      {
        numFives--;
        numThrees++;
      }
    }
    if(!foundDecentNum)
      printf("-1\n");
  }
}
