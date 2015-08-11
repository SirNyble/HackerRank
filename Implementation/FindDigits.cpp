#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

int main()
{
  int numTests;
  cin >> numTests;
  for(int i = 0; i < numTests; i++)
  {
    vector<int> numVec;
    int usrInt, count = 0;
    cin >> usrInt;
    int NUM = usrInt;
    while(usrInt > 0)
    {
      numVec.push_back(usrInt % 10);
      usrInt /= 10;
    }
    for(int j = 0; j < numVec.size(); j++)
    {
      if( numVec[j] != 0 && NUM  % numVec[j] == 0 ) count++;
    }
    cout << count << endl;
  }

  return 0;
}
