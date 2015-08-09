#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

void DiagonalDiff(vector< vector<int> > vec)
{
  int size = vec.size();
  int sum1 = 0, sum2 = 0;
  for(int i = 0; i < size; i++)
  {
      sum1 += vec[i][i];
      sum2 += vec[size - 1 - i][i];
  }
  printf("%d", abs(sum1 - sum2));
}

int main()
{
  int N, curNum;
  scanf("%d", &N);
  vector< vector<int> > myVec(N, vector<int>(N, 0));
  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < N; j++)
    {
      scanf("%d", &curNum);
      myVec[i][j] = curNum;
    }
  }
  DiagonalDiff(myVec);

  return 1;
}
