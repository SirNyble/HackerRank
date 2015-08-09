#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <cstring>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

//Helper function to tokenize input string
vector<string> SplitTime(string timeIn)
{
  vector<string> formatTime;
  char * str = new char[timeIn.length() + 1];
  strcpy(str, timeIn.c_str());
  char* token = strtok(str, ":");
  while(token != NULL)
  {
    formatTime.push_back(token);
    token = strtok(NULL, ":");
  }

  return formatTime;
}

int main()
{
  int hour;
  string timeIn;
  cin >> timeIn;

  //AM/PM
  string isLateStr = timeIn.substr(timeIn.size() - 2, timeIn.size() - 1);

  //trim the non-tokenizable string
  timeIn = timeIn.substr(0, timeIn.size() - 2);

  //tokenize the string into hour, min, sec
  vector<string> vec = SplitTime(timeIn);
  hour = atoi(vec[0].c_str());

  //edge case for midnight/noon
  if (strcmp(isLateStr.c_str(), "PM") == 0)
  {
    if(hour != 12)
      hour += 12;
  }
  else
  {
    if(hour == 12)
      hour = 0;
  }

  //fill hour with extra 0 if hour < 10
  stringstream ss;
  ss << setw(2) << setfill('0') << hour;
  string hourStr = ss.str();

  //print result!
  cout << hourStr << ":" << vec[1] << ":" << vec[2];
  return 1;
}
