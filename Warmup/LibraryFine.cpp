#include <stdlib.h>
#include <stdio.h>

int main()
{
  int actualDay, actualMonth, actualYear;
  int expectedDay, expectedMonth, expectedYear;
  scanf("%d%d%d\n%d%d%d", &actualDay, &actualMonth, &actualYear,
                          &expectedDay, &expectedMonth, &expectedYear);
  if(actualYear > expectedYear)
    printf("10000");
  else if(actualMonth > expectedMonth && actualYear == expectedYear)
    printf("%d", 500 * (actualMonth - expectedMonth));
  else if(actualDay > expectedDay && actualMonth == expectedMonth)
    printf("%d", 15 * (actualDay - expectedDay));
  else
    printf("0");

  return 1;
}
