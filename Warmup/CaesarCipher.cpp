#include <stdlib.h>
#include <stdio.h>

int main()
{
  int strSize, cipher;
  scanf("%d\n", &strSize);
  char * usrStr = new char[strSize];
  scanf("%s", usrStr);
  scanf("%d", &cipher);

  for(int i = 0; i < strSize; i++)
  {
    char letter = usrStr[i];

    //65 - 90 UPPER & 97-122 lower
    if((int)letter >= 65 && (int)letter <= 90)
    {
      char asciiLet = letter - 65;
      letter = 65 + ((asciiLet + cipher) % 26) ;
    }
    else if((int)letter >= 97 && (int)letter <= 122)
    {
      char asciiLet = letter - 97;
      letter = 97 + ((asciiLet + cipher) % 26) ;
    }
    printf("%c", letter);
  }
  return 1;
}
