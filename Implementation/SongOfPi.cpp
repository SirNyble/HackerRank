#include <stdio.h>
//Helper function to get length of string.
int stringLen(const char * str)
{
  int count = 0;
  while(str[count] != '\0')  count++;

  return count;
}

//Parse a word of str, starting from start
char * getToken(char * str, int & start)
{
  char* result = new char[10];
  int tokCount = 0;
  while(str[start] != ' ' && str[start] != '\n')
  {
    result[tokCount] = str[start];
    start++;
    tokCount++;
  }
  //Skip the whitespace or newline
  start++;
  //set last value to null termination
  result[tokCount] = '\0';
  return result;
}

int main()
{
  //PI!
  const char* pi = "31415926535897932384626433833";
  int numTests;
  scanf("%d\n", &numTests);
  for(int i = 0; i < numTests; i++)
  {
    //Buffer for userInput. Spec says no more than 500 Chars
    char usrStr[500];
    fgets(usrStr, sizeof(usrStr), stdin);

    //Start is where we have parsed in usrStr. Count is how far we are in pi
    int start = 0, count = 0;

    char * token;
    bool isPie = true;
    //while we haven't parsed to the end of the string
    while(start < stringLen(usrStr))
    {
      token = getToken(usrStr, start);
      if(stringLen(token) != (int)(pi[count] - '0'))
      {
        isPie = false;
        break;
      }
      count++;

    }
    if(isPie) printf("It's a pi song.\n");
    else  printf("It's not a pi song.\n");
  }
  return 0;
}
