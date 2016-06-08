#include "header.h"

int main()
{
  //take an initial number
  int initial = 0;
  int n = 0;
  cout << "Checking if initial can equal 91 in n steps" << endl;
  cout << "Initial: ";
  cin >> initial;
  cout << "N: ";
  cin >> n;

  if (n == 0)
  {
    cout << "Definitely can't be done" << endl;
    return 0;
  }

  else if (initial == 91)
  {
    cout << "Definitely can be done" << endl;
    return 0;
  }
  //take n to see if we can get to 91 in n steps
  //initial call to get us into the recursion
  goal(initial, n);
  //

  return 0;
}

//does goal need to return n? or something
void goal(int initial, int n)
{
  //check if we have succeeded or failed
  if (n < 0)
  {
    //cout << "fail" << endl;
    return;
  }
  else if (initial == 91)
  {
    cout << "Got it!" << endl;
    return;
  }
  //and if you haven't succeeded then call it once or twice for recursion
  goal(initial+53, n-1);
  if ((initial%2)==0)
    goal (initial/2, n-1);

  return;
}
