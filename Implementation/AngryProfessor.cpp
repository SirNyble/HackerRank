#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numTests;
  scanf("%d", &numTests);

  int n, k, numStudents = 0;
  for(int i = 0; i < numTests; i++)
  {
    scanf("%d%d", &n, &k);
    for(int j = 0; j < n; j++)
    {
      int currentStudent;
      scanf("%d", &currentStudent);
      if(currentStudent <= 0)  numStudents++;
    }
    if(numStudents < k)  printf("YES\n");
    else  printf("NO\n");
    numStudents = 0;
  }
}
