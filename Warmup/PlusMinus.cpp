#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N, curNum;
  int success = scanf("%d", &N);
  int numPos = 0, numNeg = 0, numZero = 0;
  for(int i = 0; i < N; i++)
  {
      success = scanf("%d", &curNum);
      if(curNum > 0) numPos++;
      else if(curNum < 0) numNeg++;
      else numZero++;
  }

  printf("%.3f\n%.3f\n%.3f", ((double)numPos / N), ((double)numNeg / N), ((double)numZero / N) );
  return 1;
}
